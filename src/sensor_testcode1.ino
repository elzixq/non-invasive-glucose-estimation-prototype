const int LED660 = 9;      // MOSFET Gate for 660 nm LED

const int LED940 = 10;     // MOSFET Gate for 940 nm LED

const int SENSOR = A0;     // Photodiode output



void setup()

{

  pinMode(LED660, OUTPUT);

  pinMode(LED940, OUTPUT);



  digitalWrite(LED660, LOW);

  digitalWrite(LED940, LOW);



  Serial.begin(115200);



  Serial.println("Optical Glucose System Test");

}



void loop()

{

  // ---------- RED LED ----------

  digitalWrite(LED660, HIGH);

  digitalWrite(LED940, LOW);



  delay(100);



  int redValue = analogRead(SENSOR);



  // ---------- IR LED ----------

  digitalWrite(LED660, LOW);

  digitalWrite(LED940, HIGH);



  delay(100);



  int irValue = analogRead(SENSOR);



  // ---------- Print Results ----------

  Serial.print("Red: ");

  Serial.print(redValue);



  Serial.print("   IR: ");

  Serial.println(irValue);



  delay(200);

}

