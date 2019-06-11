#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);   
int a = 0;  
int b = 0;         
int lb = 0;
int b2 = 0;         
int lb2 = 0;     
void setup() 
{
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}
void loop() 
{
  lcd.clear();
  b = digitalRead(6);
  b2 = digitalRead(7);
  if (b != lb) 
  {
    if (b == HIGH)
    {
      a++;
    } 
    else
    {
    }
    delay(50);
  }
  lb = b;
   if (b2 != lb2)
   {
    if (b2 == HIGH)
    {
      a--;
    } else 
    {
    }
    delay(50);
  }
  lb2 = b2;
  lcd.print(a);
  delay(150);
}
