/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
//-------- Variables--------------
const int relay = 2;
const int espera = 3;
const int sensor = 4;
int sensorValue = 0;
//----------------------------------

//-------------setup-----------------
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(espera, OUTPUT);
  pinMode(sensor, INPUT);
}

//------------------------------------


//------------------loop-----------------------
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValue = digitalRead(sensor);
  // print out the value you read:
  //Serial.println(sensorValue);
    //condicionales
    if (sensorValue == LOW)
      {
        digitalWrite(relay, HIGH);
        delay(5000); 
      }
      else
      {
        digitalWrite(relay, LOW);
        digitalWrite(espera, HIGH);
        delay(1800000);
      }
      digitalWrite(espera, LOW);
  //bomba = digitalWrite(A1, sensorValue);
  delay(1);        // delay in between reads for stability
}
//----------------------------------------------------------

