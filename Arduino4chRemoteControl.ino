/**
 * description: Example for RF transmitter/receiver module 
 * author: Sungjoon Kim (method76)
 * date: 2015.8.18
 */
#define PIN_1            8   // Button A
#define PIN_2            9   // Button B
#define PIN_3            10  // Button C
#define PIN_4            11  // Button D
#define PIN_EN           12  // EN

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(PIN_1, INPUT); 
  pinMode(PIN_2, INPUT); 
  pinMode(PIN_3, INPUT); 
  pinMode(PIN_4, INPUT);
  pinMode(PIN_EN, OUTPUT);  
  Serial.println("Init completed");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_EN, HIGH); 
  
  int recv1 = digitalRead(PIN_1);
  int recv2 = digitalRead(PIN_2);
  int recv3 = digitalRead(PIN_3);
  int recv4 = digitalRead(PIN_4);
  if(recv1 == HIGH) {
    Serial.println("1 is high");
  }  
  if(recv2 == HIGH) {
    Serial.println("2 is high");
  } 
  if(recv3 == HIGH) {
    Serial.println("3 is high");
  } 
  if(recv4 == HIGH) {
    Serial.println("4 is high");
  } 
  
  delay(100);
}

