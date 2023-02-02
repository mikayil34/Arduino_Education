// C++ code
//
#define LED_BUILTIN 10
#define Button 8
int buton_durumu=0;

void setup()
{
   pinMode(Button, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
 buton_durumu= digitalRead(Button);
  if(buton_durumu==1){
    digitalWrite(LED_BUILTIN, HIGH);
  }else	{
  digitalWrite(LED_BUILTIN, LOW);
  } 
   
}