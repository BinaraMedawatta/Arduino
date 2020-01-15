void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<10; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  for(int j=0; j<256; j++){
    x = j;
    for(int k=2; k<10; k++){
      if(x%2==0)
        digitalWrite(k, LOW);
      else
        digitalWrite(k, HIGH);
      x = x/2;
    }
  }
}
