int trigger = 2;
int trigger2 = 12;
int echo = 3;
int echo2 = 11;
int indicationLED = 4;
int buzzer = 5;
int IRoutput = 6;
int motorOutput = 8;
int button1 = 7;

int configurationButton = 13;




float distance = 0;
float distanceFromGround = 0;
float requiredDistance = 0;

float bottleHeight = 8 ;
float bottleHeight1 = 20;
float bottleHeight2 = 20;
float bottleHeight3 = 20;
float bottleHeight4 = 20;
float bottleHeight5 = 20;

int sensorActive = 0;
void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trigger2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(IRoutput, INPUT);
  pinMode(indicationLED, OUTPUT);
  pinMode(motorOutput, OUTPUT);
  pinMode(button1, INPUT);
  
  // pinMode(configurationButton,INPUT);
  // pinMode(button4,INPUT);
  //
  // pinMode(G,OUTPUT);
  // pinMode(F,OUTPUT);
  // pinMode(A,OUTPUT);
  // pinMode(B,OUTPUT);
  // pinMode(C,OUTPUT);
  // pinMode(G,OUTPUT);
  // pinMode(G,OUTPUT);

  delay(500);

  distanceFromGround = doUltraSonic();
  Serial.println(distanceFromGround);
  requiredDistance = distanceFromGround - bottleHeight + 2;
  delay(2000);
//  Serial.print("Bottle Distance is" );
//  Serial.println(doUltraSonic());
  bottleHeight1 = requiredDistance;
  bottleHeight2 = requiredDistance;
  bottleHeight3 = requiredDistance;
  bottleHeight4 = requiredDistance;
  bottleHeight5 = requiredDistance;
  // digitalWrite(B,HIGH);
  // digitalWrite(C,HIGH);
  // digitalWrite(A,HIGH);
  // digitalWrite(F,HIGH);
  // digitalWrite(G,HIGH);
  // digitalWrite(E,HIGH);
  // digitalWrite(D,HIGH);
  Serial.print("Req. Distance");
  Serial.println(requiredDistance);
  Serial.println("This is a test");

  delay(500);
  playAlarm(500);
  delay(500);
  playAlarm(500);
}
void playAlarm(int del) {
  digitalWrite(indicationLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(del);
  digitalWrite(indicationLED, LOW);
  digitalWrite(buzzer, LOW);
}
void loop() {
  //  digitalWrite(motorOutput,LOW);
  //  Serial.println(digitalRead(button3));
  //   digitalWrite(B,HIGH);
  // digitalWrite(C,HIGH);
  // digitalWrite(A,HIGH);
  // digitalWrite(F,HIGH);
  // digitalWrite(G,HIGH);
  // digitalWrite(E,HIGH);
  // digitalWrite(D,HIGH);
  sensorActive = digitalRead(button1);
  Serial.println(digitalRead(button1));
  if (sensorActive) {
    digitalWrite(motorOutput, HIGH);
    delay(21000);
    while (true) {

      distance = doUltraSonic();
      Serial.print("Distance is");
      Serial.println(distance);
      Serial.print("Required Distance is");
      Serial.println(requiredDistance);
      Serial.print("Bool is");
      Serial.println(distance < requiredDistance);
      if (distance < requiredDistance and distance !=0) {
//        distance = doUltraSonic();
        if (distance < requiredDistance and distance !=0) {
          digitalWrite(motorOutput, LOW);
          playAlarm(2000);
          break;
        }
      }
    }
  }
  if (digitalRead(button1) == HIGH) {
    selectButton(1);
    delay(500);
  }
//  if (digitalRead(button2) == HIGH) {
//    selectButton(2);
//    delay(500);
//  }
  //if (digitalRead(button3)==HIGH){
  //  Serial.println("FJF");
  //    selectButton(3);
  // }
  // if (digitalRead(button4)==HIGH){
  //    selectButton(4);
  // }
  // else if (digitalRead(button5)==HIGH){
  //    selectButton(5);
  // }
  if (false) {
    playAlarm(1000);
    while (true) {
      if (digitalRead(button1) == HIGH) {
        configureButton(1);
        break;
      }
//      else if (digitalRead(button2) == HIGH) {
//        configureButton(2);
//        break;
//      }
    }
  }
}

float doUltraSonic() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  int t = pulseIn(echo, HIGH);
  Serial.print("Time: ");
  Serial.println(t);
  return t * 0.034 / 2;
  
}

float doUltraSonic2() {
  digitalWrite(trigger2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger2, LOW);
  delayMicroseconds(2);
  int t = pulseIn(echo2, HIGH);
  Serial.print("Time: ");
  Serial.println(t);
  return t * 0.034 / 2;
  
}
void selectButton(int button) {
  switch (button) {
      //      case 1:
      //         Serial.println("The configuration selected is 1st");
      //         digitalWrite(B,HIGH);
      //         digitalWrite(C,HIGH);
      //         digitalWrite(A,LOW);
      //         digitalWrite(F,LOW);
      //         digitalWrite(G,LOW);
      //         digitalWrite(E,LOW);
      //         digitalWrite(D,LOW);
      //         requiredDistance = bottleHeight1;
      //         break;
      //      case 2:
      //         Serial.println("The configuration selected is 2nd");
      //         digitalWrite(B,HIGH);
      //         digitalWrite(C,LOW);
      //         digitalWrite(A,HIGH);
      //         digitalWrite(F,LOW);
      //         digitalWrite(G,HIGH);
      //         digitalWrite(E,HIGH);
      //         digitalWrite(D,HIGH);
      //         requiredDistance = bottleHeight2;
      //         break;
      //      case 3:
      //         Serial.println("The configuration selected is 3rd");
      //         digitalWrite(B,HIGH);
      //         digitalWrite(C,HIGH);
      //         digitalWrite(A,HIGH);
      //         digitalWrite(F,LOW);
      //         digitalWrite(G,HIGH);
      //         digitalWrite(E,LOW);
      //         digitalWrite(D,HIGH);
      //         requiredDistance = bottleHeight3;
      //         break;
      //      case 4:
      //         Serial.println("The configuration selected is 4th");
      //         digitalWrite(B,HIGH);
      //         digitalWrite(C,HIGH);
      //         digitalWrite(A,LOW);
      //         digitalWrite(F,HIGH);
      //         digitalWrite(G,HIGH);
      //         digitalWrite(E,LOW);
      //         digitalWrite(D,LOW);
      //         requiredDistance = bottleHeight4;
      //         break;
      //      case 5:
      //         Serial.println("The configuration selected is 5th");
      //         digitalWrite(B,LOW);
      //         digitalWrite(C,HIGH);
      //         digitalWrite(A,HIGH);
      //         digitalWrite(F,HIGH);
      //         digitalWrite(G,HIGH);
      //         digitalWrite(E,LOW);
      //         digitalWrite(D,HIGH);
      //         requiredDistance = bottleHeight5;
      //         break;
  }
}
void configureButton(int button) {
  playAlarm(200);
  delay(500);
  float newBottle = doUltraSonic() - 3;
  delay(500);
  switch (button) {
    case 1:
      Serial.println("The configuration selected is 1st");
      bottleHeight1 = newBottle;
    case 2:
      Serial.println("The configuration selected is 2nd");
      bottleHeight2 = newBottle;
    case 3:
      Serial.println("The configuration selected is 3rd");
      bottleHeight3 = newBottle;
    case 4:
      Serial.println("The configuration selected is 4th");
      bottleHeight4 = newBottle;
    case 5:
      Serial.println("The configuration selected is 5th");
      bottleHeight5 = newBottle;
  }
  playAlarm(200);

}
