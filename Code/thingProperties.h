// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "42b10181-4364-408b-8d5c-72474a5d1c5b";
const char DEVICE_LOGIN_NAME[]  = "824f0577-f729-4cd6-9002-a34d1c318f98";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onSwitch4Change();
void onSwitch2Change();
void onSwitch1Change();
void onSwitch3Change();

bool switch4;
bool switch2;
bool switch1;
bool switch3;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(switch4, READWRITE, ON_CHANGE, onSwitch4Change);
  ArduinoCloud.addProperty(switch2, READWRITE, ON_CHANGE, onSwitch2Change);
  ArduinoCloud.addProperty(switch1, READWRITE, ON_CHANGE, onSwitch1Change);
  ArduinoCloud.addProperty(switch3, READWRITE, ON_CHANGE, onSwitch3Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
