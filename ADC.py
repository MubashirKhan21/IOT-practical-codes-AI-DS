#***********************Connections*********************
#   RPI Expansion Board            Interfacing Board
#         UEXT                            SV5
#short Jumpers JP1, JP2, JP3 on Interfcing board
#*******************************************************

# Importing modules
import spidev               # To communicate with SPI devices
from numpy import interp    # To scale values
from time import sleep	    # To add delay
import RPi.GPIO as GPIO	    # To use GPIO pins

# Start SPI connection
spi = spidev.SpiDev() # Created an object
spi.open(0,0)	

GPIO.setmode(GPIO.BCM)
 
# Read MCP3008 data
def analogInput(channel):
  spi.max_speed_hz = 1350000
  adc = spi.xfer2([1,(8+channel)<<4,0])
  data = ((adc[1]&3) << 8) + adc[2]
  return data

#the infinite loop where the values are read and printed
while True:
    output = analogInput(0) # Reading from CH0
    print(output)
    output = interp(output, [0, 637], [0, 3.3])
    final_op = "{:.2f}".format(output)
    print("Voltage: "+final_op+" V")
    sleep(0.8) #values are displayed every 800ms
