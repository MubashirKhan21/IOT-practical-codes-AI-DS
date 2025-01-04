#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#       SV2                          SV3(Switches)   
#       SV3                          SV1(LEDs)
#*******************************************************

import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

LED_1	=	5
LED_2	=	6
LED_3	=	13
LED_4	=	12
LED_5	=	16
LED_6	=	19
LED_7	=	20
LED_8	=	26

SW_1	=	23
SW_2	=	24
SW_3	=	10
SW_4	=	9
SW_5	=	25
SW_6	=	11
SW_7	=	8
SW_8	=	7

GPIO.cleanup()

GPIO.setup(LED_1,GPIO.OUT)
GPIO.setup(LED_2,GPIO.OUT)
GPIO.setup(LED_3,GPIO.OUT)
GPIO.setup(LED_4,GPIO.OUT)
GPIO.setup(LED_5,GPIO.OUT)
GPIO.setup(LED_6,GPIO.OUT)
GPIO.setup(LED_7,GPIO.OUT)
GPIO.setup(LED_8,GPIO.OUT)

GPIO.setup(SW_1,GPIO.IN)
GPIO.setup(SW_2,GPIO.IN)
GPIO.setup(SW_3,GPIO.IN)
GPIO.setup(SW_4,GPIO.IN)
GPIO.setup(SW_5,GPIO.IN)
GPIO.setup(SW_6,GPIO.IN)
GPIO.setup(SW_7,GPIO.IN)
GPIO.setup(SW_8,GPIO.IN)

GPIO.output(LED_1, GPIO.LOW)
GPIO.output(LED_2, GPIO.LOW)
GPIO.output(LED_3, GPIO.LOW)
GPIO.output(LED_4, GPIO.LOW)
GPIO.output(LED_5, GPIO.LOW)
GPIO.output(LED_6, GPIO.LOW)
GPIO.output(LED_7, GPIO.LOW)
GPIO.output(LED_8, GPIO.LOW)


while(True):
    if GPIO.input(SW_1) == 1:
        GPIO.output(LED_1, GPIO.HIGH)
        #print("SW1")
    else:
        GPIO.output(LED_1, GPIO.LOW)
        
        
    if GPIO.input(SW_2) == 1:
        GPIO.output(LED_2, GPIO.HIGH)
        #print("SW2")
    else:
        GPIO.output(LED_2, GPIO.LOW)
    
    if GPIO.input(SW_3) == 1:
        GPIO.output(LED_3, GPIO.HIGH)
        #print("SW3")
        
    else:
        GPIO.output(LED_3, GPIO.LOW)
        
        
    if GPIO.input(SW_4) == 1:
        GPIO.output(LED_4, GPIO.HIGH)
        #print("Sw4")
    else:
        GPIO.output(LED_4, GPIO.LOW)
        
    if GPIO.input(SW_5) == 1:
        GPIO.output(LED_5, GPIO.HIGH)
        #print("SW5")
    else:
        GPIO.output(LED_5, GPIO.LOW)
        
    if GPIO.input(SW_6) == 1:
        GPIO.output(LED_6, GPIO.HIGH)
        #print("SW6")
    else:
        GPIO.output(LED_6, GPIO.LOW)
        
    if GPIO.input(SW_7) == 1:
        GPIO.output(LED_7, GPIO.HIGH)
        #print("SW7")
    else:
        GPIO.output(LED_7, GPIO.LOW)
        
        
    if GPIO.input(SW_8) == 1:
        GPIO.output(LED_8, GPIO.HIGH)
        #print("SW8")
    else:
        GPIO.output(LED_8, GPIO.LOW)

GPIO.cleanup()