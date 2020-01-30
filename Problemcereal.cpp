/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 1: Problemcereal.cpp
*/


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  //Variables declared here
  float ouncesToMetricTon = 35273.92;
  float weightCereal = 0;
  float cerealMetricTon = 0;
  float finalNumCerealBoxes = 0;

//These lines prompt the user for the weight in ounces and stores it in a variable.
	cout << "Please enter the weight of the cereal box in ounces: " << endl;
  cin >> weightCereal;
//These variables store the value of the converted numbers
  cerealMetricTon = weightCereal/ouncesToMetricTon;
  finalNumCerealBoxes = ouncesToMetricTon/weightCereal;

//The cerealMetricTon and finalNumCerealBoxes floats are printed to the user.
  cout << "The weight of the cereal box in metric tons is : " << cerealMetricTon <<  endl;
  cout << "The number of boxes needed to yeild a metric ton of cereal is : " << finalNumCerealBoxes <<  endl;

  return 0;
}
