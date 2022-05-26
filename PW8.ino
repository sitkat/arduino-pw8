#include <TimerOne.h>
#include <MultiFuncShield.h>
#include <Wire.h>

#define PIN_MQ A3
#define PIN_LM35 A2
#define PIN_PHOTO_SENSOR A1

#define LED2 12
#define LED3 13
#define buzzer 5

int rawVoltage = 0;
float temp = 0;
int rawValue = 0;
int rawValuePS = 0;

float A = 0;
float B = 0;
float C = 0;

bool firstStart = false;

unsigned long timing_1 = 0;
unsigned long timing_2 = 0;
unsigned long timing_3 = 0;
unsigned long timing_options = 0;

unsigned long timing_buzzer = 0;

#define INTERVAL_1 1000
#define INTERVAL_2 2000
#define INTERVAL_3 5000

#define INTERVAL_options 6000

#define INTERVAL_buzzer 3000

void setup() {
  Serial.begin(9600);

  pinMode(PIN_LM35, INPUT);
  pinMode(PIN_MQ, INPUT);
  pinMode(PIN_PHOTO_SENSOR, INPUT);

  pinMode(buzzer, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  analogReadLM();
  analogReadMQ();
  analogReadPH();
  getValues();
}
