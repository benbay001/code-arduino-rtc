#include<LiquidCrystal.h>
#include<DS1302.h>

DS1302 rtc(11,12,13);
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {

  rtc.halt(false);
  rtc.writeProtect(false);

  lcd.begin(16,2);

//rtc.setDOW(FRIDAY);
 rtc.setTime(24,0,0);
 //rtc.setDate(24,11,2023);

#define led 10
}

void loop() {

 
  lcd.setCursor(0,0);
  lcd.print(rtc.getTimeStr());

 // lcd.setCursor(1,1);
//lcd.print(rtc.getDateStr(FORMAT_SHORT));

//lcd.setCursor(6,1);
//lcd.print(rtc.getTimeStr());
//delay(10);
 
if(rtc.getTimeStr()== "04:55:00"){
  digitalWrite(led,HIGH);
}
}
