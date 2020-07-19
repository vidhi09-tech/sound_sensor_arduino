//pin declartaion
//pin mode declaration
//pin data declaration

int soundSensor = 12;
int LED = 3;

void setup()
{
    pinMode(soundSensor, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int statusSensor = digitalRead(soundSensor);
    if (statusSensor == 1)
    {
        digitalWrite(LED, HIGH);
        Serial.print("NOISE");
        delay(500);
    }
    else
    {
        digitalWrite(LED, LOW);
        Serial.print("NO NOISE");
    }
}