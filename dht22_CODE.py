#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#         SV2                             SV4
#*******************************************************
import RPi.GPIO as GPIO
import time
import sys
import Adafruit_DHT

# Timing constants
E_PULSE = 0.0005
E_DELAY = 0.0005
 
def main():
  # Main program block
  GPIO.setwarnings(False)
  GPIO.setmode(GPIO.BCM)       # Use BCM GPIO numbers
 
  while True:
    humidity, temperature = Adafruit_DHT.read_retry(11, 24)
    print ('Temp: {0:0.1f} C  Humidity: {1:0.1f} %'.format(temperature, humidity))

if __name__ == '__main__':
 
  try:
    main()
  except KeyboardInterrupt:
    pass
  finally:
    GPIO.cleanup()
