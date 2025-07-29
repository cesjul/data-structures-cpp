#include <iostream>
#include "time.h"

using namespace std;

/*
-------------------CONSTRUCTOR------------------
*/

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s){

}

/*
-------------------GETTERS------------------
*/

int Time::getHour() const{
    return hour;
}

int Time::getMinute() const{
    return minute;
}

int Time::getSecond() const{
    return second;
}

/*
-------------------SETTERS------------------
*/

void Time::setHour(int hour){
    this->hour = hour;
}

void Time::setMinute(int minute){
    this->minute = minute;
}

void Time::setSecond(int second){
    this->second = second;
}

void Time::nextSecond(){
    second++;

    if (second >= 60){
        second = 0;
        minute++;
    }

    if (minute >= 60){
        minute = 0;
        hour++;
    }

    if (hour >= 24){
        hour = 0;
    }
}

/*
-------------------PRINTING------------------
*/

void Time::print() const{
    cout << hour << ":" << minute << ":" << second << endl;
}