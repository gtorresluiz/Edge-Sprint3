// Sprint-02

#include<LiquidCrystal.h> 
// biblioteca do lcd

LiquidCrystal lcd(7,6,5,4,3,2); // RS, E, D4, D5, D6, D7

int ledVerde = 13;
int ledVerm = 12;
int buzzer = 10;
int rele = 8;
int sensorLDR = A5;
int limiteLDR = 600;

void setup(){
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVerm, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(rele, OUTPUT);
  pinMode(sensorLDR, INPUT);
  
  Serial.begin(9600);
  lcd.begin(16,2);
}
void loop(){
  
  int leituraL = analogRead(sensorLDR);
  Serial.print("Leitura: ");
  Serial.println(leituraL);
 
  if (leituraL > limiteLDR) { 
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Sistema");
    lcd.setCursor(0,1);
    lcd.print("Desligado");
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVerm, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(rele, LOW);
    delay(1000);
    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Tampa");
    lcd.setCursor(0,1);
    lcd.print("Abrindo....");
    digitalWrite(ledVerm, LOW);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(rele, HIGH); 
    delay(3000);
  }
  else{     
    lcd.clear();
    digitalWrite(buzzer, LOW);
    digitalWrite(rele, LOW);   
    lcd.setCursor(0,0);
    lcd.print("Tampa");
    lcd.setCursor(0,1);
    lcd.print("Aberta....");  
    delay(10000);
  } 
}

