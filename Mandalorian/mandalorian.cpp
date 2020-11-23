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




Mandalorian::Mandalorian(string name, int nr, long date): name(name),nr(nr), date(date)
{
    //ascoolarobban & älpan
}
string Mandalorian::getName() const
{
    return name;
}

int Mandalorian::getNr() const
{
    return nr;
}

long Mandalorian::getDate() const
{
    return date;
}

