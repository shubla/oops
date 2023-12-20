#include <iostream> 
using namespace std; 
class Complex { 
private: 
double real; 
double imaginary; 
public: 
Complex() { 
real = 0.0; 
imaginary = 0.0; 
}
void assignValue(double r, double i) { 
real = r; 
imaginary = i; 
}
void displayComplex() { 
cout << "Complex Number: " << real << " + " << imaginary << "i" << endl; 
}
void addReal(double num) { 
real += num; 
}
void subtractReal(double num) { 
real -= num; 
}
void addImaginary(double num) { 
imaginary += num; 
}
void subtractImaginary(double num) { 
imaginary -= num; 
}
}; 
int main() { 
Complex complexNum; 
double real, imaginary; 
cout << "Enter real and imaginary parts of complex number: "; 
cin >> real >> imaginary; 
complexNum.assignValue(real, imaginary); 
complexNum.displayComplex(); 
double realAdd, realSub, imaginaryAdd, imaginarySub; 
cout << "Enter a real number to add: "; 
cin >> realAdd; 
complexNum.addReal(realAdd); 
cout << "Enter a real number to subtract: "; 
cin >> realSub; 
complexNum.subtractReal(realSub); 
cout << "Enter an imaginary number to add: "; 
cin >> imaginaryAdd; 
complexNum.addImaginary(imaginaryAdd); 
cout << "Enter an imaginary number to subtract: "; 
cin >> imaginarySub; 
complexNum.subtractImaginary(imaginarySub); 
complexNum.displayComplex(); 
return 0; 
}