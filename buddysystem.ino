
int MY_LED = D6;

void ledToggle(const char *event, const char *data) {
    
    std::string temp = (std::string)data;
    Particle.publish(data);
    
    if(temp == "wave")
    {
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);    
    }
    else if(temp == "pat")
    {
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(200);
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);  
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(200);
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);   
    }
}
    



void setup()
{
    pinMode(MY_LED,OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", ledToggle);
}

void loop()
{
    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
    delay(10000);
    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
    delay(10000);
    
}