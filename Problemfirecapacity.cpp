/*
Kelsey Holland
002298547
kholland@chapman.edu
CPSC-298-01
Assignment 1: Problemfirecapacity.cpp
*/


#include <iostream>
using namespace std;

//Main Method
int main(int argc, char **argv)
{
//Variables declared here
  int roomCapacity = 0;
  int numberOfPeople = 0;

//These lines ask the user for the room capacity and stores it in a variable
  cout << "Please enter the meeting room capacity: " << endl;
  cin >> roomCapacity;
//These lines ask the user for the number of people and stores it in a variable
  cout << "Please enter the number of people attending: " << endl;
  cin >> numberOfPeople;

//If the number of people is less than the capacity, the user is printed that
//they can host the meeting. Otherwise it is printed they cannot and the
//the number of people needing to leave is printed
  if (numberOfPeople <= roomCapacity)
  {
    cout << "It is legal to hold the meeting." << endl;
    cout << roomCapacity - numberOfPeople << " more people can attend." << endl;
  }
  else
  {
    cout << "The meeting cannot be held becuase the number of people exceeds the room capacity." << endl;
    cout << numberOfPeople - roomCapacity << " people must be excluded to meet fire regulations." << endl;
  }


  return 0;
}
