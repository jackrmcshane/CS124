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
  char continueChar(null);
  string dayString(null);
  string startTime(null);
  double rate(0);
  int startTime[2];
  int duration(0), day(0);

  do{
    cout << "Enter the day the call was placed (using two characters): ";
    cin.ignore();
    getLine(dayString);
    cout << "What time was the call placed? ";
    cin.ignore();
    getLine(startTime);
    cout << "How long did the call last (minutes)? ";
    cin >> duration;

    day = daySwitch( dayString );
    startTime[] = breakString( startTime );
    rate = determineRate( day, startTime[] );
    cost = duration * rate;

    cout.setf(ios::floating)
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The cost of your call is $" << cost;

    cout << "Would you like to perform another calculation (y/n)? ";
    cin >> continueChar;
  }while( continue( continueChar ) );

  cout << endl;
  return 0;
}
