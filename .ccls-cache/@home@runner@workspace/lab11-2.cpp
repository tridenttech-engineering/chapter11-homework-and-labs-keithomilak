//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Keith Omilak> on <4/14/25>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int SIZE = 5; //size of array
double finishTimes[5];

//get lowest time
double getLowest(double finishtimes[], int SIZE)
{
    double lowest = finishtimes[0]; // apply first element as lowest
    for(int x=1; x<SIZE; x++)
    {
        if(finishtimes[x] < lowest)
            lowest = finishtimes[x];
    }
    return lowest;
}

double getAverage(double finishtimes[], int SIZE)
{
    double total = 0.0;
    for(int x=0; x<SIZE; x++)
    {
        total = total + finishtimes[x];
    }
    
    return total/SIZE; //return average
}

int main()
{

    double average = 0.0;
    double lowest = 0.0;
    
   for (int i = 0; i < SIZE; i++)
       {
           cout << "Enter finish time for racer " << i+1 << ": " << endl;
           cin >> finishTimes[i];
       }

    average = getAverage(finishTimes, SIZE);
    lowest = getLowest(finishTimes, SIZE);

    cout << fixed << setprecision(1);
    cout << "Average finish time: " << average << endl;
    cout << "Lowest finish time: " << lowest << endl;
    
    return 0;
}//end of main function    
