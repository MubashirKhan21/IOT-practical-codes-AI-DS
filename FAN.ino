
#define EN2 18
#define IP3 16
#define IP4 14

void Fan_ON();
void Fan_OFF();


void setup(){
  //Define DC motor(FAN) pins as output
  pinMode(EN2,OUTPUT);
  pinMode(IP3,OUTPUT);
  pinMode(IP4,OUTPUT);

  //Initially tunr OFF the Fan
  digitalWrite(EN2,LOW);
  digitalWrite(IP3,LOW);
  digitalWrite(IP4,LOW);
  
  
}

void loop(){
  Fan_ON();
  delay(3000);
  Fan_OFF();
  delay(3000);
  
}


void Fan_ON(){
  digitalWrite(EN2,HIGH);
  digitalWrite(IP3,HIGH);
  digitalWrite(IP4,LOW);
}

void Fan_OFF(){
  digitalWrite(EN2,LOW);
  digitalWrite(IP3,LOW);
  digitalWrite(IP4,LOW);
}
