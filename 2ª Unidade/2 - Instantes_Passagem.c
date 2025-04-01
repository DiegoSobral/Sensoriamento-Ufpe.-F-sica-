int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  Serial.println((analogRead(A0)));
  if(analogRead(A0)>700) {
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
  }
  delay(4);
}
