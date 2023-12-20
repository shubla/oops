#include <iostream> 
using namespace std; 
float calculateSimpleInterest(float principal, float time, float rate = 5.0) { 
return (principal * rate * time) / 100; 
}
int main() { 
float principal, time, rate; 
cout << "Enter principal amount: "; 
cin >> principal; 
cout << "Enter time period (in years): "; 
cin >> time; 
cout<<"Simple Interest(Default*rate*5%):"<< 
calculateSimpleInterest(principal, time) << endl; 
cout << "Enter rate of interest: "; 
cin >> rate; 
cout << "Simple Interest: " << calculateSimpleInterest(principal, time, rate) << 
endl; 
return 0; 
}
