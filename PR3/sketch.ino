const int PIRPin=34;
const int ledpin=19;
int potValue=0;

void setup() {
  Serial.begin(9600);
  pinMode(PIRPin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  potValue=digitalRead(PIRPin);
  if(potValue==1){
    digitalWrite(ledpin, HIGH);
    delay(2000);
    Serial.println("Warning");
  }else{
  digitalWrite(ledpin, LOW);
  delay(2000);
  Serial.println(potValue);
  }
  delay(500);

}