#include <SPI.h>
#include <LoRa.h>
#include <Wire.h>
#include "util/Comms.h"
#include "util/Logs.h"
#include "Web.h"
#include "UI.h"

void setup() {
  Serial.begin(115200);
  //initLog();
  initLora();
  Serial.println("initLora done");
  //writeLog("testtest");
  //sendLora("initLora done");
  initDisplay();
  Serial.println("initDisplay done");
  //sendLora("initDisplay done");
  initWeb();
  Serial.println("initWeb done");
  //sendLora("initWeb done");
  //sendLora("Setup Done"); 
  initButton();
  //initLog();
  //closeLog();
}

void loop() {
  loopButton();
  loopDisplay();
  //loopLog();
}