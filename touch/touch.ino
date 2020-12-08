// ESP32 Touch Test
int touch_value = 100; 
void setup()
{
Serial.begin(115200);  
pinMode (4, INPUT);   
pinMode(2, OUTPUT);   
digitalWrite (2, LOW);
}

void loop()
{
touch_value = touchRead(4);     
Serial.print("Touch value is = ");
Serial.println( touch_value);   

if (touch_value < 50)      
{digitalWrite (2, HIGH);}
else
{digitalWrite (2, LOW);}
delay(100);
}
