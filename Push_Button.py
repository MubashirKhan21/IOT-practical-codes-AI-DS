#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#         SV3                      SV2(Push-Buttons)
#*******************************************************
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

PB_3 = 5
PB_2 = 6
PB_1 = 12
PB_4 = 13
PB_5 = 19


GPIO.setup(PB_1,GPIO.IN)
GPIO.setup(PB_2,GPIO.IN)
GPIO.setup(PB_3,GPIO.IN)
GPIO.setup(PB_4,GPIO.IN)
GPIO.setup(PB_5,GPIO.IN)

while(True):
    if(GPIO.input(PB_1)):
        print("Push_Button-1")
        time.sleep(0.35)
    if(GPIO.input(PB_2)):
        print("Push_Button-2")
        time.sleep(0.35)
    if(GPIO.input(PB_3)):
       print("Push_Button-3")
       time.sleep(0.35)
    if(GPIO.input(PB_4)):
        print("Push_Button-4")
        time.sleep(0.35)
    if(GPIO.input(PB_5)):
        print("Push_Button-5")
        time.sleep(0.35)

GPIO.cleanup()
