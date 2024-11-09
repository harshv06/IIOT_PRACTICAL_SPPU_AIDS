const int potPin=34;
int potValue=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potValue=analogRead(potPin);
  if(potValue>2000){
    Serial.println("Warning");
  }else{
  Serial.println(potValue);
  }
  delay(500);

}