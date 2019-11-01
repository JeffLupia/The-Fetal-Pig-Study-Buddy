#include <LiquidCrystal.h>

int A0Pin = 0;
int A0Val = 0;


String CurrentArtery = "No Vein Selected";


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
   lcd.begin(16, 2);
}

void loop() {
  
A0Val = analogRead(A0Pin);


if(67 < A0Val && A0Val <= 75){
  if(CurrentArtery != "External Jugular"){
  CurrentArtery = "External Jugular";
  }
  else{
    ;
  }
 }
 else if(142 < A0Val && A0Val <= 148){
   if(CurrentArtery != "SubclavianArtery"){
  CurrentArtery = "SubclavianArtery";
  }
  else{
    ;
  }
 }
 else if(218 < A0Val && A0Val <= 222){
   if(CurrentArtery != "SuperiorVenaCava"){
  CurrentArtery = "SuperiorVenaCava";
  }
  else{
    ;
  }
 }
 else if(292 < A0Val && A0Val <= 296){
   if(CurrentArtery != "InferiorVenaCava"){
  CurrentArtery = "InferiorVenaCava";
  }
  else{
    ;
  }
 }
 else if(367 < A0Val && A0Val <= 371){
   if(CurrentArtery != "Femoral Artery"){
  CurrentArtery = "Femoral Artery";
  }
  else{
    ;
  }
 }
 else if(442 < A0Val && A0Val <= 446){
   if(CurrentArtery != "Hepatic Artery"){
  CurrentArtery = "Hepatic Artery";
  }
  else{
    ;
  }
 }
  else if(516 < A0Val && A0Val <= 520){
     if(CurrentArtery != "Renal Artery"){
  CurrentArtery = "Renal Artery";
  }
  else{
    ;
  }
 }
  else if(590 < A0Val && A0Val <= 595){
     if(CurrentArtery != "Umbilical artery"){
  CurrentArtery = "Umbilical Artery";
  }
  else{
    ;
  }
 }
  else if(666 < A0Val && A0Val<= 670){
     if(CurrentArtery != "External Iliac"){
  CurrentArtery = "External Iliac";
     }
  else{
    ;
      }
     }
   else{
    if(CurrentArtery != "No Vein Selected"){
  CurrentArtery = "No Vein Selected";
     }
   }
/* Serial.println(A0Val);*/ needed to determine mapped voltages for remainder of code
 lcd.clear();
 lcd.print(CurrentArtery);
 delay(1000);
}
