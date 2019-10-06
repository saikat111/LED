#include <Arduino.h>

int side[10]={13,12,11,10,9,8,7,6,5,4};
int time=250;

void setup()
{
for(int i=0;i<=10;i++){
    pinMode(side[i],OUTPUT);
}


}
void when_first(){
    for(int i=0;i<=10;i++){

    digitalWrite(side[i],1);
    delay(time);
    }

}
void reverce(){
        delay(time);
     for(int i=10;i>=0;i--){

    digitalWrite(side[i],0);
    delay(time);
    }


}

void side_collum_led(){

digitalWrite(side[9],1);
digitalWrite(side[4],1);
digitalWrite(side[0],1);
digitalWrite(side[5],1);
delay(1000);
digitalWrite(side[9],0);
digitalWrite(side[4],0);
digitalWrite(side[0],0);
digitalWrite(side[5],0);
delay(time);



}
void middile(){
    digitalWrite(side[1],1);
    digitalWrite(side[8],1);
     delay(time);
    digitalWrite(side[2],1);
    digitalWrite(side[7],1);
     delay(time);
    digitalWrite(side[3],1);
    digitalWrite(side[6],1);
     delay(time);
  
    digitalWrite(side[1],0);
    digitalWrite(side[8],0);
     delay(time);
    digitalWrite(side[2],0);
    digitalWrite(side[7],0);
     delay(time);
       digitalWrite(side[3],0);
    digitalWrite(side[6],0);
     delay(time);
 


}


void loop()
{
when_first();
reverce();
middile();
side_collum_led();



}
