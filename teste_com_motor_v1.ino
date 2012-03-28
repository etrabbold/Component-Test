int count1;

void setup()
{                
  Serial.begin(38400);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
}

void loop(){
  Start();
  Teste1();
  Teste2();
  delay(5000);
  Serial.print("Recomecando... \n");
  delay(1000);
}


void Teste2(){
  Serial.println();
  Serial.print("Analog Test \n");
  Serial.print("Pin A-OFF \n");
  Serial.print("Pin B: ");
  digitalWrite(25, LOW);
  count1 = 0;
 
  while(count1 <= 255){
    analogWrite(26, count1);
    Serial.print(count1);
    Serial.print("-");
    count1 = count1 + 1;
    delay(25);
  }
  if(count1 >= 255) delay(1000);
  while(count1 >= 0){
    analogWrite(26, count1);
    Serial.print(count1);
    Serial.print("-");
    count1 = count1 - 5;
    delay(25); 
  }

  delay(2000);
  Serial.println();
  Serial.print("Pin B-OFF \n");
  Serial.print("Pin A: ");
  digitalWrite(26, LOW);
  count1 = 0;
  
  while(count1 <= 255){
    analogWrite(25, count1);
    Serial.print(count1);
    Serial.print("-");
    count1 = count1 + 1;
    delay(25);
  }
  if(count1 >= 255) delay(1000);
  while(count1 >= 0){
    analogWrite(25, count1);
    Serial.print(count1);
    Serial.print("-");
    count1 = count1 - 5;
    delay(25); 
  }  
}  

void Teste1(){
  Serial.print("Digital Test \n");
  Serial.print("Pin: ");
  Serial.print("25 ON / 26 OFF ");
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  delay(4000);
  Serial.print("- 25 OFF / 26 OFF ");
  digitalWrite(25, LOW);
  digitalWrite(26, LOW);
  delay(1000);
  Serial.print("- 25 OFF / 26 ON ");
  digitalWrite(25, LOW);
  digitalWrite(26, HIGH);
  delay(4000);
  Serial.print("- 25 OFF / 26 OFF ");
  digitalWrite(25, LOW);
  digitalWrite(26, LOW);
  delay(1000);

  Serial.print("25 ON / 26 OFF ");
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  delay(750);
  Serial.print("- 25 OFF / 26 OFF ");
  digitalWrite(25, LOW);
  digitalWrite(26, LOW);
  //delay(50);
  Serial.print("- 25 OFF / 26 ON ");
  digitalWrite(25, LOW);
  digitalWrite(26, HIGH);
  //delay(750);
  Serial.print("- 25 OFF / 26 OFF ");
  digitalWrite(25, LOW);
  digitalWrite(26, LOW);
  delay(50);
  Serial.println();
}  

void Start(){
  Serial.print("TEST START");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print(". \n \n");
  delay(500);
}
