#include <iostream>
using namespace std;

class User{
private:
  double height;
  double weight;
  int age;

public:
  User(){
    this -> height = 0;
    this -> weight = 0;
    this -> age = 0;
  }

  User( double height, double weight, int age )){
    this -> height = height;
    this -> weight = weight;
    this -> age = age;
  }

  double getHeight(){ return height; }
  double getWeight(){ return weight; }
  int getAge(){ return age; }
  void setHeight( double height ){ this -> height =  height; }
  void setWeight( double weight ){ this -> weight = weight; }
  void setAge( int age ){ this -> age = age; }
};

int main(){
  User user1;
  user1.setHeight(args);

  User user2(args);

  return 0;
}
