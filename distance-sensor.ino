#define echoPin 2
#define trigger_PIN 3

long duration;
int distance;

void setup()
{
    pinMode(trigger_PIN, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(trigger_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger_PIN, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
    Serial.print("Distância: ");
    Serial.print(distance);
    Serial.println(" cm");
}
