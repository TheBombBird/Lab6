void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
// pin 12 is on for 1 second and off for 1 second (Red LED)
// pin 8 is on for 2 seconds and off for 2 seconds (Green LED)

 digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(12,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
 digitalWrite(12,LOW);
 delay(1000);
 digitalWrite(12,HIGH);
 delay(1000);
 digitalWrite(12,LOW);
}

// Ethan  