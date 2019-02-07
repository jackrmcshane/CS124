/**
Jack McShane
CS124 Spring 2019
Homework 2 Project 1
*/

#include <iostream>
#include <std::string>
using namespace std;

double determineRate( string day, string startTime[] ){
  //use switch statement to determine rate instead?
  const double WEEEKDAY = .4;
  const double WEEKNIGHT = .25;
  const double WEEKEND = .15;


}

bool continue( char continueChar ){
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

string breakString( string string ){
  int startTime[] = {0, 0};
  string string1(null);
  string string2(null);

  index = string.find(':');
  string1 = string.substr(0, index);
  string2 = string.substr(index + 1, startTime.length() );

  //parse strings to integers and return
  startTime[0] = stoi(string1);
  startTime[1] = stoi(string2);

  return startTime[];
}

int main(){
  do{
    string day(null);
    string startTime(null);
    int startTime[] = { 0, 0 };
    char continueChar(null);
    int duration(0);
    double cost(0);

    cout << "Enter the day of the week (using two characters): ";
    cin >> day;
    cout << "Enter the time the call started: ";
    cin >> startTime;
    cout << "Enter the duration of the call in minutes: ";
    cin >> duration;

    startTime[] = breakString( startTime );
    rate = determineRate( day, startTime[] );
    cost = rate * duration;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The cost of your call is: $" << cost << endl << endl;

    cout << "Would you like to perform a new calculation ( y/n )? ";
    cin >> continueChar;
  }while( continue( continueChar ) );

  cout << endl;
  return 0;
}
