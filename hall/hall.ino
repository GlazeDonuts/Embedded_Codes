int hall_val;
void setup() {
  Serial.begin(115200);
  pinMode (2, OUTPUT);  
}

void loop() {
  hall_val = hallRead();       //get value from hallsensor
  if (hall_val <=0 || hall_val>=50) digitalWrite (2, HIGH);
  else digitalWrite (2, LOW);
  Serial.print("Hall sensor measurement: ");  
  Serial.println(hall_val);    //to graph
  delay(250);
}
