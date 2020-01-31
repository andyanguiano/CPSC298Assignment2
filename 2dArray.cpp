#include <iostream>

using namespace std;

//main method inputs numbers into a 2d array
int main(int argc, char **argv0){
  int a[4][5];
  int num = 0;

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cout << "Input number: ";
      cin >> num;
      a[i][j] = num;
    }
  }

  return 0;
}
