//Introductory21.cpp - Displays the average stock price
//Created/revised by <Keith Omilak> on <4/14/25>

#include <iostream>
#include <iomanip>
using namespace std;

double getAverage(double prices[], int SIZE)
{
	double total = 0.0;
	for(int x=0; x<SIZE; x++)
		{
			total = total + prices[x];
		}//end of for loop

	return total/SIZE;
} 

int main()
{
	int SIZE = 10; //array size
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double average = 0.0;


	//calculate average
	average = getAverage(prices, SIZE);
	
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

