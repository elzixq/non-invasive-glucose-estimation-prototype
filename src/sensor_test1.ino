const int LED_RED = 9;
const int LED_IR  = 10;
const int SENSOR  = A0;

int readAverage(int samples = 20)
{
  long sum = 0;

  for (int i = 0; i < samples; i++)
  {
    sum += analogRead(SENSOR);
    delay(2);
  }

  return sum / samples;
}

void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_IR, OUTPUT);

  // Keep both LEDs OFF
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_IR, LOW);

  Serial.begin(115200);
}

void loop()
{
  int sensorValue = readAverage();

  Serial.println(sensorValue);

  delay(100);
}
