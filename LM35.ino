void analogReadLM() {
  if (millis() > timing_1 + INTERVAL_1) {
    timing_1 = millis();
    rawVoltage = analogRead(PIN_LM35);
    temp = (rawVoltage / 1023.0) * 5.0 * 1000 / 10;
    Serial.println("Текущее значение температуры " + String(temp) + "°C");
  }
  buzzerController();
}
