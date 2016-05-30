/**
 * sensor value capturing
 * gets the sensor values and write them into a file.
 */

// sensors
const int photoPin = 2;
const int hallPin = 3;

PrintWriter output;

void setup() {
  pinMode(photoPin, INPUT);
  pinMode(hallPin, INPUT);

  output = createWriter("sensor.txt")
  Serial.begin(9600);           // set up Serial library at 9600 bps

}

void loop() {
  hallState = digitalRead(hallPin);
  output.print(hallState, DEC);
  output.print(",");
  photoState = digitalRead(photoPin);
  output.print(photoState, DEC);
  output.println();
  Serial.print("SENSORWERTERFASSUNG");
}
