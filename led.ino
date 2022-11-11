#define LED_PIN 8
#define BTN_PIN 9

void setup()
{
  pinMode(BTN_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  bool isButtonPressed = digitalRead(BTN_PIN);

  if (isButtonPressed == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}
