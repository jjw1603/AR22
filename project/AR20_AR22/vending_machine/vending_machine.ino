#include <LiquidCrystal_I2C_Hangul.h>
#include <Servo.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN,RST_PIN);
LiquidCrystal_I2C_Hangul lcd(0x27,16,2);
Servo servo;

int a,b,c,d;
int motorAngle;
void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  SPI.begin();



  
 
  pinMode(OUTPUT,5);
  pinMode(OUTPUT,6);
  pinMode(OUTPUT,7);
  pinMode(OUTPUT,8);
  mfrc522.PCD_Init();
  lcd.print("press Button");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print("press Button");
     //   servo.attach(A0);
     // servo.write(90);
  a=digitalRead(5);
  b=digitalRead(6);
  c=digitalRead(7);
  d=digitalRead(8);
  Serial.print(a);
  Serial.print(b);
  Serial.print(c);
  Serial.print(d);

  if(a==0)
  {
    lcd.clear();
    lcd.print("5$");
    lcd.setCursor(0,1);
    lcd.print("give me card");
    delay(3000);
    if(!mfrc522.PICC_IsNewCardPresent())
    {
      return;
    }
    if(!mfrc522.PICC_ReadCardSerial())
    {
      return;
    }
    Serial.print("UID tag : ");
    String content ="";
    byte letter;
    for(byte i=0; i<mfrc522.uid.size;++i)
    {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i],HEX);
      content.concat(String(mfrc522.uid.uidByte[i] < 0x10? " 0" : " "));
      content.concat(String(mfrc522.uid.uidByte[i],HEX));
    }
    Serial.println();
    Serial.print("Message : ");
    content.toUpperCase();
    if(content.substring(1)== "76 FF 57 1F")
    {
      
      servo.attach(A0);
      servo.write(180);
      
      delay(2000);
      servo.detach();
      delay(2000);
      lcd.clear();
      Serial.print("Take the cookies");
      lcd.print("Take the cookies");
      delay(1000);
      servo.attach(A0);
      servo.write(90);
      lcd.clear();
    }
  }
  if(b==0)
  {
    lcd.clear();
    lcd.print("5$");
    lcd.setCursor(0,1);
    lcd.print("give me card");
    delay(3000);
    if(!mfrc522.PICC_IsNewCardPresent())
    {
      return;
    }
    if(!mfrc522.PICC_ReadCardSerial())
    {
      return;
    }
    Serial.print("UID tag : ");
    String content ="";
    byte letter;
    for(byte i=0; i<mfrc522.uid.size;++i)
    {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i],HEX);
      content.concat(String(mfrc522.uid.uidByte[i] < 0x10? " 0" : " "));
      content.concat(String(mfrc522.uid.uidByte[i],HEX));
    }
    Serial.println();
    Serial.print("Message : ");
    content.toUpperCase();
    if(content.substring(1)== "76 FF 57 1F")
    {
      servo.attach(2);
      servo.write(180);
      delay(2000);
      servo.detach();
      delay(2000);
      lcd.clear();
      Serial.print("Take the cookies");
      lcd.print("Take the cookies");
      delay(1000);
      servo.attach(2);
      servo.write(90);
      lcd.clear();
    }
  }
  if(c==0)
  {
    lcd.clear();
    lcd.print("5$");
    lcd.setCursor(0,1);
    lcd.print("give me card");
    delay(3000);
    if(!mfrc522.PICC_IsNewCardPresent())
    {
      return;
    }
    if(!mfrc522.PICC_ReadCardSerial())
    {
      return;
    }
    Serial.print("UID tag : ");
    String content ="";
    byte letter;
    for(byte i=0; i<mfrc522.uid.size;++i)
    {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i],HEX);
      content.concat(String(mfrc522.uid.uidByte[i] < 0x10? " 0" : " "));
      content.concat(String(mfrc522.uid.uidByte[i],HEX));
    }
    Serial.println();
    Serial.print("Message : ");
    content.toUpperCase();
    if(content.substring(1)== "76 FF 57 1F")
    {
      servo.attach(3);
      servo.write(180);
      delay(2000);
      servo.detach();
      delay(2000);
      lcd.clear();
      Serial.print("Take the cookies");
      lcd.print("Take the cookies");
      delay(1000);
      servo.attach(3);
      servo.write(90);
      lcd.clear();
    }
  }
  if(d==0)
  {
    lcd.clear();
    lcd.print("5$");
    lcd.setCursor(0,1);
    lcd.print("give me card");
    delay(3000);
    if(!mfrc522.PICC_IsNewCardPresent())
    {
      return;
    }
    if(!mfrc522.PICC_ReadCardSerial())
    {
      return;
    }
    Serial.print("UID tag : ");
    String content ="";
    byte letter;
    for(byte i=0; i<mfrc522.uid.size;++i)
    {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i],HEX);
      content.concat(String(mfrc522.uid.uidByte[i] < 0x10? " 0" : " "));
      content.concat(String(mfrc522.uid.uidByte[i],HEX));
    }
    Serial.println();
    Serial.print("Message : ");
    content.toUpperCase();
    if(content.substring(1)== "76 FF 57 1F")
    {
      servo.attach(4);
      servo.write(180);
      delay(2000);
      servo.detach();
      delay(2000);
      lcd.clear();
      Serial.print("Take the cookies");
      lcd.print("Take the cookies");
      delay(1000);
      servo.attach(4);
      servo.write(90);
      lcd.clear();
    }
  }
  delay(100);
}
