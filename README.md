# EmtronTech_NodeMCU
Codes on NodeMCU platform for Emtron Technologies


1.AnalogInput


Aim :  To print the analog values from ADC pin of NodeMCU in Serial Terminal (Analog Output)


2.GPIO

Aim :  To print the analog values from D4 pin of NodeMCU in Serial Terminal (Digital Output)

3.DHT

Aim : To print the values of Temperature and Humidity on Serial Terminal using DHT11 Sensor


Do the Following before Compiling
Sketch ----> Include Library -------> Manage Library -------> Search DHT and Install the one by Adafruit  Version : 1.3.0


4.Print_Data_On_Web

Aim : To print the values of ADC on a Website using the NodeMCU itself



By Default Connect the NodeMCU to Your Mobile/Laptop HotSpot by Changing
const char *ssid = "SSID_Username"; // Put your HotSpot Name here
const char *password = "SSID_Password"; // Put your HotSpot Password here

After Uploading the Code Immediately open your Serial Terminal and Open 

http://IP_Address_Shown_There

Refresh Everytime to See a New Value (Control + R)




5.DHT_Thingspeak

Aim : To Show the values of Temperature and Humidity on ThingSpeak using DHT11 Sensor
Firstly Create Account on Thingspeak

String apiKey = "***************";     //  Enter your Write API key from ThingSpeak as shown above


By Default Connect the NodeMCU to Your Mobile/Laptop HotSpot by Changing
const char *ssid =  "SSID_Name";    
const char *pass =  "SSID_Password";



6.Communication Between two NodeMCU's (CommServer CommClient)

Aim : To Communicate between two Desktops using Only NodeMCU's

People uploading CommServer

AP_ssid 
AP_password

Change this with a Unique Hotspot Name and Password

People uploading CommClient

ssid
pass

Change this with the AP_ssid and AP_password you have set in CommServer





References :

http://www.instructables.com/id/WiFi-Communication-Between-Two-ESP8266-Based-MCU-T/
http://www.instructables.com/id/Quick-Start-to-Nodemcu-ESP8266-on-Arduino-IDE/
http://www.instructables.com/id/Interface-DHT11-Humidity-Sensor-Using-NodeMCU/
