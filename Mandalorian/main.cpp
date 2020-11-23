//
//  main.cpp
//  Mandalorian
//
//  Created by Robin Ellingsen on 2020-11-23.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "mandalorian.h"
#include "dateToTime.cpp"
#include "episodes.cpp"
using namespace std;



void printAllEpisodes(const vector<Mandalorian>&episodes)
{
    long size = episodes.size();
    for (unsigned int i =0; i <size; i++ )
    {
        cout<<episodes[i].getName()<<" , ";
        cout<<episodes[i].getNr()<<" , ";
        cout<<episodes[i].getDate()<<" , ";
    }
}
int main()
{
    printAllEpisodes(episodes);
    
    
//    cout<<ep1.getName()<<"\n"<<ep1.getNr()<<"\n"<<ep1.getDate()<<endl;
//    double sec = difftime(ep1.getDate(), now());
//    long days = static_cast<long>(sec/(60*60*24));
//    cout<<"Days until next Mandalorian episode: "<<days<<endl;

    return 0;
}



