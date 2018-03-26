int digital2 = 2;
int digital3 = 3;
int digital4 = 4;
int arvo0 = 0;
int arvo1 = 0;
int arvo2 = 0;
int arvo3 = 0;
int arvo4 = 0;
int arvo5 = 0;
int erotus1;
int erotus2;
int erotus3;
int erotus4;
int erotus5;
int erotus6;
int erotus7;
int erotus8;
int erotus9;

void setup()  {  
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(digital2, OUTPUT);
  pinMode(digital3, OUTPUT);
  pinMode(digital4, OUTPUT);
  //digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}

void loop() {
  rivi1();
  rivi2();
  rivi3();
}

void rivi1() {
  digitalWrite(digital4, HIGH);
  digitalWrite(digital3, LOW);
  digitalWrite(digital2, LOW);
  laske_arvo1();
  laske_arvo2();
  laske_arvo3();
  Serial.println();
delay(500);
}
  
void laske_arvo1() {
  digitalWrite(digital4, 5);
  arvo0 = analogRead(A0);
  arvo1 = analogRead(A1);
  erotus1 = arvo1 - arvo0;
 Serial.println(erotus1);
}

void laske_arvo2() {
  digitalWrite(digital4, 5);
  arvo2 = analogRead(A2);
  arvo1 = analogRead(A1);
  erotus2 = arvo1 - arvo2;
  Serial.println(erotus2);
}

void laske_arvo3() {
  digitalWrite(digital4, 5);
  arvo4 = analogRead(A3);
  arvo1 = analogRead(A1);
  erotus3 = arvo1 - arvo4;
  Serial.println(erotus3);
}

void rivi2() {
  digitalWrite(digital4, LOW);
  digitalWrite(digital3, HIGH);
  digitalWrite(digital2, LOW);  
  laske_arvo4();
  laske_arvo5();
  laske_arvo6();
  Serial.println();
delay(500);
}
  
void laske_arvo4() {
  digitalWrite(digital3, 5);
  arvo0 = analogRead(A0);
  arvo3 = analogRead(A4);
  erotus4 = arvo3 - arvo0;
 Serial.println(erotus4);
}

void laske_arvo5() {
  digitalWrite(digital3, 5);
  arvo2 = analogRead(A2);
  arvo3 = analogRead(A4);
  erotus5 = arvo3 - arvo2;
  Serial.println(erotus5);
}

void laske_arvo6() {
  digitalWrite(digital3, 5);
  arvo4 = analogRead(A3);
  arvo3 = analogRead(A4);
  erotus6 = arvo3 - arvo4;
  Serial.println(erotus6);
}

void rivi3() {
  digitalWrite(digital4, LOW);
  digitalWrite(digital3, LOW);
  digitalWrite(digital2, HIGH);  
  laske_arvo7();
  laske_arvo8();
  laske_arvo9();
  Serial.println();
delay(500);
}

void laske_arvo7() {
  digitalWrite(digital2, 5);
  arvo0 = analogRead(A0);
  arvo5 = analogRead(A5);
  erotus7 = arvo5 - arvo0;
 Serial.println(erotus7);
}

void laske_arvo8() {
  digitalWrite(digital2, 5);
  arvo2 = analogRead(A2);
  arvo5 = analogRead(A5);
  erotus8 = arvo5 - arvo2;
 Serial.println(erotus8);
}

void laske_arvo9() {
  digitalWrite(digital2, 5);
  arvo4 = analogRead(A3);
  arvo5 = analogRead(A5);
  erotus9 = arvo5 - arvo4;
 Serial.println(erotus9);
}
