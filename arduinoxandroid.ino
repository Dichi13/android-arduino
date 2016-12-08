
char data=0;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  data = Serial.read();
  Serial.print(data);
  Serial.print("/n");
  if (data==1){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW):}
  else if (data==2){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH):}
}
