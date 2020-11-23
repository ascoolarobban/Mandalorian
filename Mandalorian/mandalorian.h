//
//  mandalorian.hpp
//  Mandalorian
//
//  Created by Robin Ellingsen on 2020-11-23.
//

#ifndef mandalorian_h
#define mandalorian_h
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include "mandalorian.h"
using namespace std;


class Mandalorian
{
private:
    string episodeName;
    int episodeNr;
    time_t date;
    
    
public:
    Mandalorian(string episodeName, int episodeNr, time_t date);
    Mandalorian();
    string getName();
    int getNr();
    time_t getDate();
};




#endif /* mandalorian_h */
