void LED12Controller() {
  if (rawValuePS < B && firstStart) {
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
}
