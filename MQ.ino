void analogReadMQ() {
  if (millis() > timing_3 + INTERVAL_3) {
    timing_3 = millis();
    rawValue = analogRead(PIN_MQ);
    Serial.println("Текущее значение CO2 " + String(rawValue) + " ppm");
  }
  LED13Controller();
}
