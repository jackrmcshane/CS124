#include <iostream>
#include <std::string>
using namespace std;

void calculation(){
  char firstLetter( null );
  char secondLetter( null );
  int duration( 1 );
  int position( 0 );
  string callStart( "" );
  double rate( 0 );

  cout << "Enter the day of the week your call took place: "
  cin >> firstLetter >> secondLetter;
  cout << "Enter the time the call started: ";
  cin >> callStart;
  cout << "Enter the duration of the call in minutes: ";
  cin >> duration;

  position = callStart.find( ":" );
  startHour = callStart.substr( 0, position );
  startMinute = callStart.substr( position + 1 );

  rate = determineRate( firstLetter, secondLetter, callStart );
  cost = rate * duration;

  cout << "The cost of your call is: $" << cost << endl << endl;

  cout << "Would you like to perform a new calculation? ( y/n )? ";
  cin >> continueChar;

  if( newCalculation( continueChar ) ){ calculation(); }
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
      return true;
  }
}

int main(){
  calculation();

  return 0;
}
