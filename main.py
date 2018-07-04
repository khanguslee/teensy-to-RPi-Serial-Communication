import serial 

ser = serial.Serial(
	'/dev/ttyAMA0',
	baudrate=500000,
	)

while True:
	serial_output = ser.readline()
	print(serial_output)