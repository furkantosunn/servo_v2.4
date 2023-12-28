// Cukurova Electromobile Team 2020
//Atmega 328P-old bootloader 

//kahverengi -- gnd
//beyaz --  +7.4 volt 
//yeşil --  pwm sinyal
#include <Servo.h>

Servo servo_mbi;

int servo_pin = 5; // D3 pinine baglı 

int pos = 0;    // ilk pozisyonu 0 derece 

void setup() {
  servo_mbi.attach(servo_pin); 
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1)   // Derece ayarı 57 den veriniz
  
  { 
    servo_mbi.write(pos);              
    delay(28);}          // hız ayarı sakın 57 den vermeyiniz ayarı 
  
 
 for (pos = 90; pos >= 0; pos -= 1) {
    servo_mbi.write(pos);              
    delay(28);
    
 }}


//
// Cukurova Electromobile Team 2020
//Atmega 328P-old bootloader 

//kahverengi -- gnd
//beyaz --  +7.4 volt 
//yeşil --  pwm sinyal
#include <Servo.h>

Servo servo_mbi;

int servo_pin = 3; // D3 pinine baglı 

int pos = 0;    // ilk pozisyonu 0 derece 

void setup() {
  servo_mbi.attach(servo_pin); 
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1)   // Derece ayarı 57 den veriniz
  
  { 
    servo_mbi.write(pos);              
    delay(28);}          // hız ayarı sakın 57 den vermeyiniz ayarı 
  
 
 for (pos = 90; pos >= 0; pos -= 1) {
    servo_mbi.write(pos);              
    delay(28);
    
 }}
//
