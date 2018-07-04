import serial 

ser = serial.Serial(
	'/dev/serial0',
	baudrate=500000,
	bytesize=serial.EIGHTBITS
	)

while True:
	if ser.in_waiting > 0:	
		serial_output = ser.read(ser.in_waiting)
		print(str(serial_output))
