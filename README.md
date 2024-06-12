# BT-LED-Commander
BT-LED Commander is a basic but efficient project that lets users control an LED with Bluetooth. We can control the LED using a mobile application that uses Bluetooth communication. This project is quite suitable for novices as they can learn about Bluetooth communication and the usage of Arduino.

## Requirements
Before you begin, ensure you have the following:
* Arduino NANO
* Bluetooth Module (HC - 05)
* Breadboard
* LED
* Jumper Wires
* Resistor (220 Ohms)
* USB Cable

## Connections
* Connect negative leg of LED to GND pin using a jumper wire.
* Connect a 220 Ohms resistance between the positive leg of LED and the pin D4 using a jumper wire.
* Connect the GND pin of the bluetooth module to the GND pin using a jumper wire.
* Connect the VCC pin of the bluetooth module to the 5V pin using a jumper wire.
* Connect the TXD pin of the bluetooth module to the RX0 pin using a jumper wire.
* Connect the RXD pin of the bluetooth module to the TX1 pin using a jumper wire

  
  ![WhatsApp Image 2024-06-12 at 15 33 21](https://github.com/riaagarwal21/BT-LED-Commander/assets/97599436/5e8af5fa-7806-4e2a-b7e6-30218fb2891a)


## Installation of the App
To install the mobile application, download and install the .apk file provided. 

To customize the user interface of the application, you can use the .aia file and import it into MIT App Inventor. This allows for easy modification and enhancement of the app's design and functionality according to your preferences.

## For Simulation
Before uploading the given code, remove the wire end at RX0 pin. Once the code is uploaded, connect the wire end as earlier. 


To get a local copy of the project, you can clone the repository using the below mentioned command:
  
    git clone https://github.com/riaagarwal21/BT-LED-Commander.git

