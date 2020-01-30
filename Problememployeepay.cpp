/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 1: Problememployeepay.cpp
*/

#include <iostream>
using namespace std;

//Main method
int main(int argc, char **argv)
{
  //Variables declared here
  int numHours = 0;
  float rate = 16.00;
  float overTimeRate = 1.5 * rate;

//These are the variables and rates taken out of the initial pay
  float socialSecurityTax = .06;
  float federalIncomeTax = .14;
  float stateIncomeTax = .05;
  int medicalInsurance = 10;

//Final variables outputed to the user
  float grossPay = 0 ;
  float netTakeHomePay = 0;

//---------------------------------------------
//The user is prompted to enter the number of hours worked during that week
  cout << "Enter in the number of hours worked this week: " << endl;
  cin >> numHours;

//The overtime hours and rate are calculated and added to the gross pay
  grossPay = ((numHours - 40) * overTimeRate) + (numHours * rate);

//The user is shown the gross pay
  cout << "Your gross pay is: $" << grossPay << endl;
  cout << " " << endl;

  //The user is shown how much each tax is taking away from the gross pay
  cout << "Here are the withholding amounts: " << endl;
  cout << "Social Security Tax: $" << socialSecurityTax * grossPay << endl;
  cout << "Federal Income Tax: $" << federalIncomeTax * grossPay <<endl;
  cout << "State Income Tax: $" << stateIncomeTax * grossPay <<endl;
  cout << "Medical Insurance: $" << medicalInsurance << endl;

//The net take home pay is calculated and printed to the user.
  netTakeHomePay = grossPay - (socialSecurityTax * grossPay) - (federalIncomeTax * grossPay) - (stateIncomeTax * grossPay) - medicalInsurance;
  cout << "Your net take-home pay for this week is: $" << netTakeHomePay << endl;

  return 0;
}
