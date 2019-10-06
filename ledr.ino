int side[4]={13,12,11,10};
int time=250;

void setup()
{
for(int i=0;i<=4;i++){
    pinMode(side[i],OUTPUT);
}


}
void when_first(){
    for(int i=0;i<=4;i++){

    digitalWrite(side[i],1);
    delay(time);
    }

}
void loop()
{
when_first();
}
