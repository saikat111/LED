#include <Arduino.h>
int led[2]={13,12};
void setup()
{
	Serial.begin(9600);
	for(int i=0;i<=1;i++)

	pinMode(led[i], OUTPUT);
}
void fast(){

	Serial.println("Hello world!");

	delay(1000);
	for(int i=0;i<=1;i++){
	digitalWrite(led[i], HIGH);
	//delay(1000);
	//digitalWrite(led[i], LOW);
	//delay(1000);
	}


}


void loop()
{
 fast();
}

