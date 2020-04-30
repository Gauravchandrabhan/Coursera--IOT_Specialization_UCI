int sensor = A0;
int led = 13;   
int sensorvalue = 0;
void setup() {
 pinMode(led, OUTPUT);

}

void loop() {
  sensorvalue= analogRead(sensor);
  if (sensorvalue<128){
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}
