#include <Arduino.h>
const int PU = 2;
const int PUMP = 3;
const int EV = 4;
const int EVV = 5;
const int PUMPP = 6;

void startPump(int pumpid, int evid)
{
  digitalWrite(pumpid, HIGH);
  digitalWrite(evid, HIGH);
}

void stopPump(int pumpid, int evid)
{
  digitalWrite(pumpid, LOW);
  digitalWrite(evid, LOW);
}

void startPulv(int puid) {digitalWrite(puid, HIGH);}
void stopPulv(int puid) {digitalWrite(puid, LOW);}

void setup() {
  pinMode(PU, OUTPUT);
  pinMode(PUMP, OUTPUT);
  pinMode(EV, OUTPUT);
  pinMode(PUMPP, OUTPUT);
  pinMode(EVV, OUTPUT);
  digitalWrite(PU, LOW);
  digitalWrite(PUMP, LOW);
  digitalWrite(EV, LOW);
  digitalWrite(PUMPP, LOW);
  digitalWrite(EVV, LOW);
}

void loop() {
  startPump(PUMP, EV);
  startPump(PUMPP, EVV);
  startPulv(PU);
  delay(10000);
  stopPump(PUMP, EV);
  stopPump(PUMPP, EVV);
  stopPulv(PU);
  delay(3000);
}
