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

  // Secret operation gestures
  if (index > 900 && middle > 900 && ring > 900 && little > 900) {
    Serial.println("Attack");
  }
  else if (index > 900 && middle > 900 && ring > 900 && little < 900) {
    Serial.println("Defend");
  }
  else if (index < 900 && middle < 900 && ring < 900 && little > 900) {
    Serial.println("Cover");
  }
  // Letter gestures
  else if (ring > 900 && index > 900 && middle > 900 && little > 900) {
    Serial.println("a");
  }
  else if (ring < 900 && index < 900 && little < 900) {
    Serial.println("b");
  }
  else if (ring < 900 && index > 900 && middle > 800 && little > 900) {
    Serial.println("d");
  }
  else if (ring > 900 && index > 900 && middle > 900 && little > 900) {
    Serial.println("e");
  }
  else if (ring > 900 && index < 890 && little < 890) {
    Serial.println("f");
  }
  else if (ring < 900 && index > 890 && middle > 890 && little > 890) {
    Serial.println("g");
  }
  else if (ring < 900 && index < 900 && middle > 870 && little > 900) {
    Serial.println("h");
  }
  else if (ring > 900 && index > 900 && middle > 900 && little < 900) {
    Serial.println("i");
  }
  else if (ring > 900 && index > 900 && middle > 900 && little < 900) {
    Serial.println("j");
  }
  else if (ring < 900 && index < 900 && middle > 900 && little > 900) {
    Serial.println("k");
  }
  else if (ring < 900 && index > 900 && middle > 900 && little > 900) {
    Serial.println("l");
  }
  else if (ring > 900 && index > 900 && middle > 900 && little < 900) {
    Serial.println("m");
  }
  else if (ring > 900 && index > 900 && middle < 900 && little < 900) {
    Serial.println("n");
  }
  else if (ring < 900 && index < 900 && middle < 900 && little > 900) {
    Serial.println("o");
  }
  else if (ring < 910 && index > 900 && middle > 900 && little < 890) {
    Serial.println("p");
  }
  else if (ring < 900 && index > 900 && middle < 920 && little < 890) {
    Serial.println("q");
  }
  else if (ring < 900 && index < 900 && middle > 920 && little > 890) {
    Serial.println("r");
  }
  else if (ring > 900 && index > 900 && middle > 920 && little > 890) {
    Serial.println("s");
  }
  else if (ring > 900 && index > 900 && middle < 920 && little < 890) {
    Serial.println("t");
  }
  else if (ring < 900 && index < 900 && middle > 900 && little < 900) {
    Serial.println("u");
  }
  else if (ring < 900 && index > 900 && middle < 900 && little < 900) {
    Serial.println("v");
  }
  else if (ring < 900 && index < 900 && middle < 900 && little < 900) {
    Serial.println("w");
  }
  else if (ring > 900 && index > 900 && middle < 900 && little < 900) {
    Serial.println("x");
  }
  else if (ring > 900 && index > 900 && middle < 900 && little > 900) {
    Serial.println("y");
  }
  else if (ring > 900 && index > 900 && middle < 900 && little < 900) {
    Serial.println("z");
  }

  delay(2500);
}
