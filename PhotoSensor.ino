void analogReadPH() {
  if (millis() > timing_2 + INTERVAL_2) {
    timing_2 = millis();
    rawValuePS = analogRead(PIN_PHOTO_SENSOR);
    Serial.println("Текущее значение освещенности " + String(rawValuePS) + " у.е.");
    LED12Controller();
  }
}
