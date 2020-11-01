/*
  This is my submission to HackOrTreat Hackathon.
  It simply blinks and LED and plays this is halloween off of the buzzer.
  Author: Richard Rosenthal
  Date 10-31-2020
*/
int LED1 = 13;
int buzzer = 16;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(LED1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 440);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 392);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 466);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 440);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 392);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 493);
  delay(300); 
  noTone(buzzer);

  
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 349);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 349);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 311);
  delay(200); 
  noTone(buzzer);

  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 277);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 261);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 392);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 415);
  delay(400); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 493);
  delay(300); 
  noTone(buzzer);
  
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 493);
  delay(300); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 493);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 466);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 415);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 493);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 466);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 493);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 466);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 415);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 493);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 392);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 392);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 369);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 329);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 277);
  delay(200); 
  noTone(buzzer);

  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(LED1, LOW);
  tone(buzzer, 277);
  delay(200); 
  noTone(buzzer);
  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  tone(buzzer, 277);
  delay(200); 
  noTone(buzzer);
 
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(LED1, HIGH);
  delay(200);                      // Wait for two seconds (to demonstrate the active low LED)
}
