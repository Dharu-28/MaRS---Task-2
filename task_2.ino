int PWM = 3 ;
int DIR = 2;
int triggerPin = 10;
int echoPin = 11;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(100);
  // Sets the trigger pin to LOW state for 2 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(100);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin,LOW);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  pinMode(echoPin, INPUT);
  pinMode(PWM, OUTPUT); //PWM output
  analogWrite(PWM,0);
  pinMode(DIR, OUTPUT); //DIR output
  digitalWrite(DIR, LOW);
  Serial.begin(9600);
  digitalWrite(DIR, HIGH);
}

void loop() 
{
  // analogWrite(PWM, 150);
  // delay(100);

  int dist=(readUltrasonicDistance(triggerPin, echoPin)*0.034)/2;
  Serial.print("Distance : "+String(dist));
  Serial.println(" cm");
  if (dist>100){
  digitalWrite(DIR, LOW);
  analogWrite(PWM,150);
  }
  else if (dist>75 && dist<=100){
  digitalWrite(DIR, LOW);
  analogWrite(PWM,75);
  }
  else if (dist>50 && dist<=75){
  digitalWrite(DIR, LOW);
  analogWrite(PWM,0);
  }
  else if (dist>25 && dist<=50){
  digitalWrite(DIR, HIGH);
  analogWrite(PWM,75);
  }
  else{
  digitalWrite(DIR, HIGH);
  analogWrite(PWM,150);
  }
  delay(2000);

  // while(1) continue;
}
