/**
Jack McShane
CS 124 Spring 2019
Homework 2 Project 1
*/

#include <iostream>
#include <std::string>
using namespace std;

double determineRate( int day, int startTime[] ){

}

int breakString( string startTime ){
  string brokenString[2];
  int timePlaced[] = {0, 0};
  int index = startTime.find( ":" );

  brokenString[0] = startTime.substr(0, index);
  brokenString[1] = startTime.substr(index + 1, startTime.length() );

  //parse strings to integers


  return timePlaced;
}

int daySwitch( string dayString ){
  //std::string var.compareTo()
}

bool continue( char continue ){
  switch( continue ){
    case 'y':
    case 'Y':
      return true;
    case 'n':
    case 'N':
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
