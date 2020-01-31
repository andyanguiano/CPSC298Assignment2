#include <iostream>

using namespace std;

//main methos inputs numbers into array
int main(int argc, char **argv){
  int numberArray[9];
  int number = 0;

  for(int i = 0; i < 10; ++i){
    cout << "Input number: ";
    cin >> number;

    numberArray[i] = number;
  }

  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }

  cout << endl;
  return 0;
}
