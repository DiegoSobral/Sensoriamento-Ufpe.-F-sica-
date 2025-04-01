int led = 8;

void setup() {
  pinMode(led,OUTPUT);
}
void loop() {
  if(analogRead(A0)>700) {
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
  }
  delay(4);
}
