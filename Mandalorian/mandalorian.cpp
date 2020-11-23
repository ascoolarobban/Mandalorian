//
//  mandalorian.cpp
//  Mandalorian
//
//  Created by Robin Ellingsen on 2020-11-23.
//

#include "mandalorian.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mandalorian.h"
using namespace std;




Mandalorian::Mandalorian(string episodeName, int episodeNr, time_t date): episodeName(episodeName),episodeNr(episodeNr), date(date)
{
    //ascoolarobban & älpan
}
string Mandalorian::getName()
{
    return episodeName;
}

int Mandalorian::getNr()
{
    return episodeNr;
}

time_t Mandalorian::getDate()
{
    return date;
}
