import RPi.GPIO as GPIO
import time
import Adafruit_DHT as dht
import paho.mqtt.client as mqtt
import json
import os
import sys

THINGSBOARD_HOST = 'demo.thingsboard.io'
ACCESS_TOKEN = 'Logsun_IoT_Device_12'

# Data capture and upload interval in seconds. Less interval will eventually hang the DHT22.
INTERVAL=2
 
SENSOR_PIN = 27


sensor_data = {'Presence': 0}

next_reading = time.time() 

client = mqtt.Client()

# Set access token
client.username_pw_set(ACCESS_TOKEN)

# Connect to ThingsBoard using default MQTT port and 60 seconds keepalive interval
client.connect(THINGSBOARD_HOST, 1883, 60)

client.loop_start()

 
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(SENSOR_PIN, GPIO.IN)
 
try:
    
    while True:
        #time.sleep(100)
        if GPIO.input(SENSOR_PIN):
            sensor_data['Presence'] = True
        else:
            sensor_data['Presence'] = False
        
        client.publish('v1/devices/me/telemetry', json.dumps(sensor_data), 1)
        next_reading += INTERVAL
        sleep_time = next_reading-time.time()
        if sleep_time > 0:
            time.sleep(sleep_time)
except KeyboardInterrupt:
    print ("Finish...")
GPIO.cleanup()
client.loop_stop()
client.disconnect()