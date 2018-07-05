# Teensy to Raspberry Pi Serial Communication
Getting the Teensy to send data to a Raspberry Pi Zero using serial communication.

# Installation
## Teensy
1. Install and download the latest Arduino IDE software [here](https://www.arduino.cc/en/Main/Software).
2. Install, download Teensyduino [here](https://www.pjrc.com/teensy/td_download.html), and follow the steps for your corresponding OS.
3. I suggest going through [this](https://www.pjrc.com/teensy/tutorial.html) to get an understanding on how to compile and upload code to the Teensy

## Raspberry Pi Zero 
*This may work with Raspberry Pi Model 3. Not confirmed.*

More information on setting up UART for Raspberry Pi can be found [here](https://www.raspberrypi.org/documentation/configuration/uart.md). These are the steps I did to get it working:

1. Switch Bluetooth function to use the mini UART and restore UART0/ttyAMA0 to GPIOs 14 and 15
    * Within `/boot/config.txt` add this line: `dtoverlay=pi3-miniuart-bt`
2. Disable Linux's Use of Console UART
    1. `sudo raspi-config`
    2. Select Option 5 - Interfacing Options
    3. Select Option P6 - Serial
    4. Select No for "Would you like a login shell to be accessible over serial?"
    5. Select Yes for "Would you like the serial port hardware to be enabled?"

## Wiring
### Teensy 3.6 and Raspberry Pi Zero W
![Wiring](https://github.com/khanguslee/teensy-to-RPi-Serial-Communication/blob/master/connection_diagram_teensy3-6_rpi_zero_bb.jpg?raw=true)

# Links
[Documentation for Teensy Serial functions](https://www.pjrc.com/teensy/td_uart.html).