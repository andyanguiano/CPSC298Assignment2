#include <iostream>

using namespace std;

//calculates total cost with tax and cost as parameters 
float addTax(double taxRate, double cost){
  taxRate /= 100;
  cost += (cost * taxRate);
  return cost;
}
