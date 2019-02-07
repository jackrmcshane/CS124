/**
Jack McShane
CS 124 Spring 2019
Homework 2 Project 1
*/

#include <iostream>
#include <string>
using namespace std;

double calcCost(){
  //use switch statement to determine rate instead?
  const double WEEEKDAY = .4;
  const double WEEKNIGHT = .25;
  const double WEEKEND = .15;


}

bool newCalculation( char continueChar ){
  switch ( continueChar ) {
    case 'Y':
    case 'y':
      return true;
    case 'N':
    case 'n':
      return false;
    default:
      return false;
  }
}

int main(){
  do{
    char firstLetter( null );
    char secondLetter( null );
    cout << "Enter the day of the week: "
    cin >> firstLetter >> secondLetter;
    cout << "Enter the time the call started: ";
    cin >> callStart;
    cout << "Enter the duration of the call in minutes: ";
    cin >> duration;

    rate = determineRate();

    cout << "Would you like to perform a new calculation ( y/n )? ";
    cin >> continueChar;
  }while( newCalculation( continueChar ) );

  return 0;
}
