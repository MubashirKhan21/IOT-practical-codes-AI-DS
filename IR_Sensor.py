#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#         SV2                            SV4
#*******************************************************

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

#define IR Pin
IR_Pin = 7

GPIO.setup(IR_Pin,GPIO.IN)


while(True):
    if GPIO.input(IR_Pin) == 0:
       print("Obstacle Detecte")
       time.sleep(1)

GPIO.cleanup()
        
