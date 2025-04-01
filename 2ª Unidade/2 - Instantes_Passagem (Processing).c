import processing.serial.*;
Serial myPort;
int xPos = 1;
float inByte=height;
float inByte2=height;
PrintWriter output;
void setup() {
size(400,300);
output = createWriter("times.txt");
myPort = new Serial(this,Serial.list()[5],9600);
myPort.bufferUntil('\n');
background(0);
}
void draw(){
stroke(255,255,255);
line(xPos,height - inByte2,xPos,height - inByte);
if (xPos >= width) {
xPos = 0;
background(0);
}
else {
xPos++;
}
}
void serialEvent (Serial myPort) {
String inString = myPort.readStringUntil('\n');
if (inString != null){
inString = trim(inString);
inByte2 = inByte;
inByte = float(inString);
inByte = map(inByte,0,1023,0,height);
if((inByte-inByte2)>100){
output.println(millis());
}
}
}
void keyPressed() {
output.flush(); // Writes the remaining data to the file
output.close(); // Finishes the file
exit(); // Stops the program
}
