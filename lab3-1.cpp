#include <iostream>
using namespace std;

int main() {
  double pound_weight, kilo_weight;
  cout << "Enter your weight in pounds: ";
  cin >> pound_weight;

  kilo_weight = pound_weight / 2.20462;

  std::cout << "Your weight in kilograms: " << kilo_weight 
            << "\n";

  return 0;
}