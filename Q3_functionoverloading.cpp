#include <iostream> 
#include <cmath> 
using namespace std; 
int power(int m, int n) { 
return pow(m, n); 
}
double power(double m, int n) { 
return pow(m, n); 
}
int main() { 
int intBase, intPower; 
cout << "Enter an integer base and an integer power: "; 
cin >> intBase >> intPower; 
cout << "Integer Power Result: " << power(intBase, intPower) << endl; 
double doubleBase; 
cout << "Enter a double base and an integer power: "; 
cin >> doubleBase >> intPower; 
cout << "Double Power Result: " << power(doubleBase, intPower) << endl; 
return 0; 
}
