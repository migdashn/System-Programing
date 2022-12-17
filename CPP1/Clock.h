
#ifndef MAIN_CPP_CLOCK_H
#define MAIN_CPP_CLOCK_H
#include <iostream>
using namespace std;

class Clock{
    int array[3]{};
public:
    Clock(int h=0, int m=0, int s=0);
    int getHour() const;
    int getMinute() const;
    int getSecend() const;
    void setHour(int h) ;
    void setMinute(int m) ;
    void setSecund(int s) ;
    void printTime() const;
    bool isMorning() const;
    bool isAfternoon() const;
    bool isEvening() const;
    void tick();
    ~Clock();
};


#endif //MAIN_CPP_CLOCK_H
