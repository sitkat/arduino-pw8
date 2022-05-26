void getValues() {
  if (millis() > timing_options + INTERVAL_options) {
    timing_options = millis();
    if (firstStart == false) {
      A = temp;
      B = rawValuePS;
      C = rawValue;
      Serial.println("A: " + String(A));
      Serial.println("B: " + String(B));
      Serial.println("C: " + String(C));
      firstStart = true;
    }
  }
}
