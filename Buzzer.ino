void buzzerController() {
  if (temp > A) {
    if (millis() > timing_buzzer + INTERVAL_buzzer) {
      timing_buzzer = millis();
      tone(buzzer, 600);
      noTone(buzzer);
    }
    else
      noTone(buzzer);
  }
}
