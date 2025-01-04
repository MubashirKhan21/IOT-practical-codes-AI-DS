#define BLY    0
#define BLR    1
#define BRG2    2
#define BRG1    3
#define BRY    4
#define BRR    5
#define TLG2    6
#define TLG1    7
#define TLY    8
#define TLR   9
#define TRG2   10
#define TRG1   11
#define TRY   12
#define TRR   13
#define BLG2   14
#define BLG1   15

void All_Off();

void setup() {
  // put your setup code here, to run once:
  pinMode(BLY,OUTPUT);
  pinMode(BLR,OUTPUT);
  pinMode(BRG2,OUTPUT);
  pinMode(BRG1,OUTPUT);
  pinMode(BRY,OUTPUT);
  pinMode(BRR,OUTPUT);
  pinMode(TLG2,OUTPUT);
  pinMode(TLG1,OUTPUT);
  pinMode(TLY,OUTPUT);
  pinMode(TLR,OUTPUT);
  pinMode(TRG2,OUTPUT);
  pinMode(TRG1,OUTPUT);
  pinMode(TRY,OUTPUT);
  pinMode(TRR,OUTPUT);
  pinMode(BLG2,OUTPUT);
  pinMode(BLG1,OUTPUT);

  delay(300);

  All_Off();

  delay(300);
  
//  digitalWrite(TLG2,HIGH);
//  digitalWrite(TRG2,HIGH);
//  digitalWrite(BRG2,HIGH);
//  digitalWrite(BLG2,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TLG1,HIGH);
  digitalWrite(BRG1,HIGH);
  digitalWrite(TRR,HIGH);
  digitalWrite(BLR,HIGH);
  digitalWrite(BRR,LOW);
  digitalWrite(TRG1,LOW);
  delay(2000);
  All_Off();
  digitalWrite(TLG1,LOW);
  digitalWrite(BRG1,LOW);
  digitalWrite(TLY,HIGH);
  digitalWrite(BRY,HIGH);
  
  delay(1500);
  All_Off();
  digitalWrite(TLY,LOW);
  digitalWrite(BRY,LOW);
  digitalWrite(TRR,LOW);
  digitalWrite(BLR,LOW);
  digitalWrite(TLR,HIGH);
  digitalWrite(BRR,HIGH);
  digitalWrite(TRG1,HIGH);
  digitalWrite(BLG1,HIGH);
  delay(2000);
  All_Off();
  digitalWrite(TRY,HIGH);
  digitalWrite(BLY,HIGH);
  digitalWrite(TLR,HIGH);
  digitalWrite(BRR,HIGH);
  delay(1500);
  All_Off();
  
}

void All_Off(){
  digitalWrite(BLY,LOW);
  digitalWrite(BLR,LOW);
  digitalWrite(BRG2,LOW);
  digitalWrite(BRG1,LOW);
  digitalWrite(BRY,LOW);
  digitalWrite(BRR,LOW);
  digitalWrite(TLG2,LOW);
  digitalWrite(TLG1,LOW);
  digitalWrite(TLY,LOW);
  digitalWrite(TLR,LOW);
  digitalWrite(TRG2,LOW);
  digitalWrite(TRG1,LOW);
  digitalWrite(TRY,LOW);
  digitalWrite(TRR,LOW);
  digitalWrite(BLG2,LOW);
  digitalWrite(BLG1,LOW);
}
