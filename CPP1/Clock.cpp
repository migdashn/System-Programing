#include <iostream>
#include "Clock.h"
using namespace std;

Clock :: Clock(int h, int m , int s ){
    if(h > 23 || m > 59 || s > 59){              //check valid time
        h = m = s = 0;
    }
    setHour(h);                               //set time
    setMinute(m);
    setSecund(s);
}


int Clock :: getHour() const {
    return this->array[0];                //return hour
}
int Clock :: getMinute() const {
    return this->array[1];                //return minute
}
int Clock :: getSecend()  const{
    return this->array[2];               //return second
}

void Clock :: setHour(int h) {
        this->array[0] = h;                 //set hour
}
void Clock :: setMinute(int m) {
        this->array[1] = m;        //set minute
}
void Clock :: setSecund(int s) {
        this->array[2] = s;                   //set second
}

void Clock :: printTime() const{         //print time
    if(this->array[0] < 10){
        cout << "0" << this->array[0] << ":";    //if hour in under 10 add 0
    }
    else{
        cout << this->array[0] << ":";
    }
    if(this->array[1] < 10){
        cout << "0" << this->array[1] << ":"; //if minute in under 10 add 0
    }
    else {
        cout << this->array[1] << ":";
    }
    if(this->array[2] < 10){
        cout << "0" << this->array[2] << endl;  //if second in under 10 add 0
    }
    else {
        cout << this->array[2] << endl;
    }
}

bool Clock :: isMorning() const{           //check if it is morning
    if(this->array[0]<12){
        return true;
    }
    return false;
}
bool Clock :: isAfternoon() const{           //check if it is afternoon
    if(this->array[0]<18 && this->array[0] >= 12){
        return true;
    }
    return false;
}
bool Clock :: isEvening() const{            //check if it is evening
    if(this->array[0]>=18){
        return true;
    }
    return false;
}

void Clock :: tick(){                     //move one sec and set a correct time
    this->setSecund(this->getSecend()+1);
    if(this->array[2] == 60){
        this->setSecund(0);
        this->setMinute(this->getMinute()+1);
        if (this->array[1] == 60){
            this->setMinute(0);
            this->setHour(this->getHour()+1);
            if (this->array[0] == 24){
                this->setHour(0);
            }
        }
    }
}

Clock ::~Clock() {}                   //destructor
