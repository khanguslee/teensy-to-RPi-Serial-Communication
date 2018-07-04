import serial 

ser = serial.Serial(
	'/dev/ttyAMA0',
	baudrate=500000,
	parity=serial.PARITY_ODD,
	bytesize=serial.EIGHTBITS,
	stopbits=serial.STOPBITS_ONE
	)

while True:
	serial_output = ser.readline()
	print(serial_output)