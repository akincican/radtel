int fivevolts = A0;
int analogPin = A2;
int zerovolts = A4;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fivevolts, OUTPUT);
  pinMode(zerovolts, OUTPUT);
  pinMode(analogPin, INPUT);



}

void loop() {
  
analogWrite(fivevolts, 255);
analogWrite(zerovolts, 0);
 
val = analogRead(analogPin); 
  Serial.println(val);
  
}
