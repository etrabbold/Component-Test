void setup()
{                
  Serial.begin(38400);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
}

int pot1;
//int pot2;
/*int motor1pinA;
int motor1pinB;
int motor2pinA;
int motor2pinB;*/

void loop(){
  
  pot1 = (analogRead(2)/2)-255;
  
  if(pot1 > 0){
    if(pot1 > 215) pot1 = 215;
    analogWrite(25, pot1);
    Serial.print("Motor 1 pino A: ");
    Serial.println(pot1);
    digitalWrite(26, LOW);
    Serial.print("Motor 1 pino B: ");
    Serial.println(LOW);
  } else {
    if(pot1 < -215) pot1 = -215;
    digitalWrite(25, LOW);
    Serial.print("Motor 1 pino A: ");
    Serial.println(LOW);
    analogWrite(26, -pot1);
    Serial.print("Motor 1 pino B: ");
    Serial.println(-pot1);
  }
}
