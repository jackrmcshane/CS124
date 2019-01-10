/**
Jack McShane
CS 124 Spring 2019
Homework 1 Project 2
*/

#include <iostream>
using namespace std;

int main(){
  int number, totalSum(0), positiveSum(0), negativeSum(0);

  for( int i = 0; i < 10; i++ ){
    cout << "Enter a whole number:\t";
    cin >> number;

    totalSum += number;

    if( number > 0 ){ positiveSum += number; }
    else{ negativeSum += number; }
  }

  cout << "\nThe sum of the positive numbers you input is: " << positiveSum << endl;
  cout << "The sum of the negative numbers you input is: " << negativeSum << endl;
  cout << "The total sum of all of the numbers you input is: " << totalSum << endl << endl;

  return 0;
}
