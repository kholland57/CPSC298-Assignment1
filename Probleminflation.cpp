/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 1: Probleminflation.cpp
*/

#include <iostream>
using namespace std;

//Main method
int main(  )
{
  //float variables initialized here
  float costItem = 0;
  float numberYears = 0;
  float inflationRate = 0;
  float finalCost = 0;

//These lines prompts the user for the price, years away from purchasing, and the
//inflation rate. It stores these values in their respective variables
  cout << "What is the cost of the item?" << endl;
  cin >> costItem;
  cout << "How many years from now will the item be purchased?" << endl;
  cin >> numberYears;
  cout << "What is the inflation rate? (Percentage, not decimal)" << endl;
  cin >> inflationRate;
//The inflation rate is converted to a decimal
  inflationRate = inflationRate * .01;

  //This for loop multiplies the cost of the item with the inflation rate
  //for each year and updates the costItem variable
  for (int i = 0; i < numberYears; ++i)
  {
    costItem = (inflationRate * costItem) + costItem;
  }

//The new cost of the item is printed to the user.
  cout << "The price of the item adjusted for inflation is: $" << costItem << endl;
  return 0;
}
