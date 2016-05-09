int outputLight = 9;
int outputButton = 5;
int outputMode = 0;

int LEDState = LOW;

int outputState = HIGH;
unsigned long previousMillis = 0;
const long interval = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(outputButton, INPUT);
  Serial.begin(9600);
}


void loop() {
  unsigned long currentMillis = millis();
  Serial.println(outputMode);
  int neoState  = digitalRead(outputButton);
  
  if(neoState == HIGH) //neoState  == HIGH)
  {
    outputMode = outputMode + 1;
  }
  
  if(outputMode == 0)
  {
    
    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;
      digitalWrite(outputLight, HIGH);
        
      }
      else
      {
        digitalWrite(outputLight, LOW);
      }
  }

  if(outputMode == 1)
  {
    currentMillis += 5;
      if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
      digitalWrite(outputLight, HIGH);
     }
    else {
      digitalWrite(outputLight, LOW);
    }
  }

  if(outputMode == 2)
  {
    LEDState = !LEDState;
      if (LEDState == LOW) {
        digitalWrite(outputLight, HIGH);
      } else {
        digitalWrite(outputLight, LOW);
      }
  }
  
  if(outputMode > 2 )
  {
    outputMode = 0;
  }
}
