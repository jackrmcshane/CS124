/**
Jack McShane
CS 124 Spring 2019
Homework 1 Project 3
*/

#include <iostream>
using namespace std;

int main(){
  int numberOfExercises;
  double totalScore(0), totalPointsPossible(0);

  cout << "How many exercises would you like to input grades for?:\t";
  cin >> numberOfExercises;

  for( int i = 0; i < numberOfExercises; i++ ){
    double score(0), pointsPossible(0);

    cout << "\nScore received for exercise " << i + 1 << ":\t";
    cin >> score;
    cout << "Total points possible for exercise " << i + 1 << ":\t";
    cin >> pointsPossible;

    totalScore += score;
    totalPointsPossible += pointsPossible;
  }

  cout.setf( ios::fixed );
  cout.setf( ios::showpoint );
  cout.precision( 2 );
  cout << "\nYour total score is " << totalScore << " out of " << totalPointsPossible << ", or " << (totalScore / totalPointsPossible ) * 100 << "%." << endl << endl;

  return 0;
}
