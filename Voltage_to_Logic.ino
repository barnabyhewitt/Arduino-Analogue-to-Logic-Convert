const int analogPin1 = A0;    // pin that the sensor is attached to
const int analogPin2 = A1;    // pin that the sensor is attached to
const int outputPin1 = 12;       // pin that the LED is attached to
const int outputPin2 = 13;       // pin that the LED is attached to
const int ledPin1 = 10;       // pin that the LED is attached to
const int ledPin2 = 11;       // pin that the LED is attached to
const int threshold = 512;   // an arbitrary threshold level that's in the range of the analog input

void setup() {
  // initialize the LED pin as an output:
  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);
  // initialize serial communications:
  Serial.begin(9600);
}

void loop() {
  // read the value of the potentiometer:
  int analogValue1 = analogRead(analogPin1);
  int analogValue2 = analogRead(analogPin2);


  // if the analog value is high enough, turn on the LED:
  if (analogValue1 > threshold) {
    digitalWrite(outputPin1, HIGH);
    digitalWrite(ledPin1, HIGH);
    delay(10);
    digitalWrite(outputPin1, LOW);
    digitalWrite(ledPin1, LOW);
  } else {
    digitalWrite(outputPin1, LOW);

 

  if (analogValue2 > threshold) {
    digitalWrite(outputPin2, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(10);
    digitalWrite(outputPin2, LOW);
    digitalWrite(ledPin1, LOW);
  } else {
    digitalWrite(outputPin2, LOW);



    }


  }
}
