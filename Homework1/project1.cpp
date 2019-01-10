/**
Jack McShane
CS 124 Spring 2019
Homework 1 Project 1
*/

#include <iostream>
using namespace std;

int main(){
  const double OUNCES_PER_TON = 35273.92;
  int boxesPerTon;  //whole number of boxes required to weigh one ton
  double weightInOunces;
  double weightInTons;

  cout << "\nWhat is the weight of your cereal box (in ounces)? (Enter -1 to exit.):\t";
  cin >> weightInOunces;

  while( weightInOunces >= 0 ){
    weightInTons = weightInOunces / OUNCES_PER_TON;
    boxesPerTon = ( OUNCES_PER_TON / weightInOunces ) + 1;  //concatenates double value and rounds up one as 1.99 gets stored as 1

    cout.setf( ios::fixed );
    cout.setf( ios::showpoint );
    cout.precision( 6 );
    cout << "\nThe weight of you cereal box in tons is: " << weightInTons << " tons." << endl;
    cout << "The number of boxes you need to yield 1 ton is: " << boxesPerTon << " boxes." << endl << endl;

    cout << "What is the weight of your cereal box (in ounces)? (Enter -1 to exit.):\t";
    cin >> weightInOunces;
  }
  cout << endl;

  return 0;
}
