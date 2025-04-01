#include "pitches.h"

const int threshold = 10; // minimum reading of the sensors that generates a note
// notes to play, corresponding to the 3 sensors:
int notes[] = {NOTE_A4, NOTE_B4,NOTE_C3 };

void setup() {
  
}

void loop() {
  for (int thisSensor = 0; thisSensor < 3; thisSensor++) {
  // get a sensor reading:
  int sensorReading = analogRead(thisSensor);
  // if the sensor is pressed hard enough:
  if (sensorReading > threshold) {
    // play the note corresponding to this sensor:
    tone(8, notes[thisSensor], 20);
    }
  }
}
