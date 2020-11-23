//
//  dateToTime.cpp
//  Mandalorian
//
//  Created by Robin Ellingsen on 2020-11-23.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mandalorian.h"
using namespace std;


time_t DateToTime(int day, int month, int year)
{
    tm temp = tm();
    temp.tm_mday = day;
    temp.tm_mon = month -1;
    temp.tm_year = year - 1900;
    return mktime(&temp);
}
time_t now()
{
    return time(0);
}
