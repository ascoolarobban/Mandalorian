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
    string name;
    int nr;
    long date;

public:
    Mandalorian(string name, int nr, long date);
    Mandalorian();
    string getName() const;
    int getNr() const;
    long getDate() const;
};




#endif /* mandalorian_h */
