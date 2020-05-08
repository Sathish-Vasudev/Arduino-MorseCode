// Commented codes are for using RF remote control and receiver 

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int ch1 = 5; //PWM IN
char val;
char text[]="2222";
int i = 0;
int p = 0;
char txt;
String morse;
int mors;

/*
 For "DOT" +255 (+ve)
 For "DASH" -255 (-ve)
 */
 
void setup() {
pinMode(ch1, INPUT);
Serial.begin(9600);
 lcd.begin(16,2);
   
  lcd.setCursor(0,0);
  lcd.println("INITIATING..."); 
  
}

void loop() {
  
  
  
/*ch1 = pulseIn(A1,HIGH);
int inch1 = map(ch1, 1000,2000,-255,255);*/

if (Serial.available() > 0){
 char val = Serial.read();
  
  if (val == '.'){
    for (i ; i < 4; i++){
      text[i] = '2';
    }
  }
    else if (i == 4){
    
    lcd.setCursor(0,0);
 lcd.println("MESSAGE:");
   for (int s =0; s<4; s++){
      morse += text[s];
    }
   /* mors = morse.toInt();
    //lcd.setCursor(0,0);
    //lcd.print(mors);
    Serial.println("");
    Serial.print(mors);
    lcd.clear();*/
    i = i-4;
    
    for (int k =0; k<4; k++){
      text[k] = '2';
      //lcd.setCursor(0,1);
       //lcd.print(text[k]); 
      
    }
   // lcd.clear();
      
    gettxt(morse);
    mors = 0;
    morse = "";
  }
  else { 
  fillarray(val, i);
  i = i+1;
  for (int j =0; j<4; j++){
    
    //Serial.print(text[j]);
  }
  
    }
}
//delay (500);

}

void fillarray(int val, int i)
{
  text[i] = val;  
}
  void gettxt (String t)
  {
  mors = t.toInt();
    if (mors == 122){
       txt = 'a';
  }
    else  if (mors == 1000){
       txt = 'b';
  }
    else  if (mors == 1010){
       txt = 'c';
  }
    else  if (mors == 1002){
       txt = 'd';
  }
    else  if (mors == 222){
       txt = 'e';
  }
    else  if (mors == 10){
       txt = 'f';
  }
   else  if (mors == 1102){
       txt = 'g';
  }
    else  if (mors == 0000){
       txt = 'h';
  }
    else  if (mors == 22){
       txt = 'i';
  }
    else  if (mors == 111){
       txt = 'j';
  }
    else  if (mors == 1012){
       txt = 'k';
  }
    else  if (mors == 100){
       txt = 'l';
  }
    else  if (mors == 1122){
       txt = 'm';
  }
    else  if (mors == 1022){
       txt = 'n';
  }
    else  if (mors == 1112){
       txt = 'o';
  }
    else  if (mors == 110){
       txt = 'p';
  }
    else  if (mors == 1101){
       txt = 'q';
  }
    else  if (mors == 102){
       txt = 'r';
  }
    else  if (mors == 2){
       txt = 's';
  }
    else  if (mors == 1222){
       txt = 't';
  }
    else  if (mors == 12){
       txt = 'u';
  }
    else  if (mors == 1){
       txt = 'v';
  }
    else  if (mors == 112){
       txt = 'w';
  }
    else  if (mors == 1001){
       txt = 'x';
  }
    else  if (mors == 1011){
       txt = 'y';
  }
    else  if (mors == 1100){
       txt = 'z';
  }
    else {
       txt = '*';
  }
    
    lcd.setCursor(p,1);
    lcd.print(txt);
    p++;
    
    Serial.print(txt);
    Serial.println("");
    t = "";
    txt = '/';
}
