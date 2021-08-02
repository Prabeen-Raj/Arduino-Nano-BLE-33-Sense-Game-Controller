import serial
from pynput.keyboard import Key, Controller
#Enter Your Arduino Port Number
ser = serial.Serial('Enter Port No', 9600)
keyboard = Controller()
while True:
    data = ser.readline()
    
    if data.decode().strip() == "d":
        keyboard.press("d")
        keyboard.release("d")

