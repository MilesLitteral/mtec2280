int RedLight = 7
int YellowLight = 8
int GreenLight = 9

int redButton = 6
int yellowButton = 5
int greenButton = 4

int rState = 0;
int yState = 0;
int gState = 0;

void setup()
{
	pinMode(redButton, INPUT);
	pinMode(yellowButton, INPUT);
	pinMode(greenButton, INPUT);

	//Debug
	Serial.Begin(9600);
}

void loop()
{
	rState = digitalRead(redButton);
	yState = digitalRead(yellowButton);
	gState = digitalRead(greenButton);

	if(rState == HIGH)
	{
		Serial.log("RED LIGHT");
		digitalWrite(RedLight, HIGH);
	}

	if(yState == HIGH)
	{
		Serial.log("YELLOW LIGHT");
		digitalWrite(YellowLight, HIGH);
	}

	if(gState == HIGH)
	{
		Serial.log("GREEN LIGHT");
		digitalWrite(GreenLight, HIGH);
	}
}