void setup() {
  // put your setup code here, to run once:
pinMode;(11, OUTPUT);
pinMode;(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(8)== 1 ) {
  analogWrite(11, 150);
  }

}




