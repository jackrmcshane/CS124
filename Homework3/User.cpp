#include <iostream>
using namespace std;

class User{
private:
  double height;
  double weight;
  int age;

public:
  //constructors
  User(){
    this -> height = 0;
    this -> weight = 0;
    this -> age = 0;
  }

  User( double height, double weight, int age ){
    this -> height = height;
    this -> weight = weight;
    this -> age = age;
  }

  //accessor methods
  double getHeight(){ return height; }
  double getWeight(){ return weight; }
  int getAge(){ return age; }
  void setHeight( double height ){ this -> height = height; }
  void setWeight( double weight ){ this -> weight = weight; }
  void setAge( int age ){ this -> age = age; }

  //member functions

};

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

int main(){
  char continueChar;

  do{
    

    cout << "Would you like to perform another calculation? ";
    cin >> continueChar;
  }while( continue( continueChar ) );

  return 0;
}
