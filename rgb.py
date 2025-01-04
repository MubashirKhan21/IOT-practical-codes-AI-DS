#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#         SV2                            SV4
#*******************************************************
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

RED = 10
GREEN = 9
BLUE = 25

GPIO.setup(RED, GPIO.OUT)
GPIO.setup(GREEN, GPIO.OUT)
GPIO.setup(BLUE, GPIO.OUT)

while(True):
    GPIO.output(RED, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(RED, GPIO.LOW)
    time.sleep(2)

    GPIO.output(GREEN, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(GREEN, GPIO.LOW)
    time.sleep(2)

    GPIO.output(BLUE, GPIO.HIGH)
    time.sleep(2)
    GPIO.output(BLUE, GPIO.LOW)
    time.sleep(2)
