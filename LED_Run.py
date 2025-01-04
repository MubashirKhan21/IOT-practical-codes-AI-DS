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



GPIO.setup(LED_1,GPIO.OUT)
GPIO.setup(LED_2,GPIO.OUT)
GPIO.setup(LED_3,GPIO.OUT)
GPIO.setup(LED_4,GPIO.OUT)
GPIO.setup(LED_5,GPIO.OUT)
GPIO.setup(LED_6,GPIO.OUT)
GPIO.setup(LED_7,GPIO.OUT)
GPIO.setup(LED_8,GPIO.OUT)

GPIO.output(LED_1, GPIO.LOW)
GPIO.output(LED_2, GPIO.LOW)
GPIO.output(LED_3, GPIO.LOW)
GPIO.output(LED_4, GPIO.LOW)
GPIO.output(LED_5, GPIO.LOW)
GPIO.output(LED_6, GPIO.LOW)
GPIO.output(LED_7, GPIO.LOW)
GPIO.output(LED_8, GPIO.LOW)


while(True):
	GPIO.output(LED_1,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_1,GPIO.LOW)
	GPIO.output(LED_2,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_2,GPIO.LOW)
	GPIO.output(LED_3,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_3,GPIO.LOW)
	GPIO.output(LED_4,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_4,GPIO.LOW)
	GPIO.output(LED_5,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_5,GPIO.LOW)
	GPIO.output(LED_6,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_6,GPIO.LOW)
	GPIO.output(LED_7,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_7,GPIO.LOW)
	GPIO.output(LED_8,GPIO.HIGH)
	time.sleep(0.1)
	GPIO.output(LED_8,GPIO.LOW);

GPIO.cleanup()
 