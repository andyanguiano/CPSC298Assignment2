#include <iostream>

using namespace std;

//global variables
double length = 0.0;
double inches = 0;
double feet = 0.0;
double meters = 0;
double centimeters = 0;

//takes user input for feet and inches
void userInput(){
  cout << "How many feet: ";
  cin >> feet;
  cout << "How many inches: ";
  cin >> inches;
}

//calculates feet and inches to meters and centimeters
void calculate(){
  inches = inches / 12;
  length = inches + feet;
  centimeters = length * 30.48;
  while(centimeters >= 100){
    centimeters -= 100;
    meters += 1;
  }
}

//outputs the results
void output(){
  cout << "The length is equivalent to " << meters << " meters and " << centimeters << " centimeters" << endl;
}

//main function that runs the program until the user types exit
int main(int argc, char **argv){
  string x = "";
  while(true){
    userInput();
    calculate();
    output();
    cout << "Woudl you like to continue(yes/exit): ";
    cin >> x;
    if(x == "exit"){
      break;
    }
  }
  return 0;
}
