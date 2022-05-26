void LED13Controller() {
  if (rawValue > C && firstStart) {
    digitalWrite(LED3, HIGH);
    delay(200);
    digitalWrite(LED3, LOW);
    delay(200);
  }
  else if (rawValue < C && firstStart) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
}
