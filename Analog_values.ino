void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(0,INPUT);
 
 }

void loop()
{
  // put your main code here, to run repeatedly:
  int c=analogRead(0);
  Serial.println(c);
  
}
