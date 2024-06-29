for cover the code is this 
int index = 0;
int middle = 0;
int ring = 0;
int little = 0;

void setup() {
  pinMode(A1, INPUT); // index
  pinMode(A2, INPUT); // middle
  pinMode(A3, INPUT); // ring
  pinMode(A4, INPUT); // little
  Serial.begin(9600);
}

void loop() {
  index = analogRead(A1); // index
  middle = analogRead(A2); // middle
  ring = analogRead(A3); // ring
  little = analogRead(A4); // little

  // Debugging: Print all sensor values
  Serial.print("Index: "); Serial.print(index);
  Serial.print(" Middle: "); Serial.print(middle);
  Serial.print(" Ring: "); Serial.print(ring);
  Serial.print(" Little: "); Serial.println(little);

  // Adjusted thresholds based on observed data
  if (index > 900 && middle < 10 && ring < 10 && little > 200) {
    Serial.println("Attack");
  }
  else if (index > 900 && middle < 10 && ring < 10 && little < 200) {
    Serial.println("Defend");
  }
  else if (index < 900 && middle < 10 && ring < 10 && little > 200) {
    Serial.println("Cover");
  }
  else {
    Serial.println("No recognized gesture");
  }

  delay(2500);
}
