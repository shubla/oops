#include <iostream>
using namespace std;
void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
int main() {
 int num1 = 7, num2 = 13;
 cout << "Before swapByValue: " << num1 << " " << num2 << endl;
 swapByValue(num1, num2);
 cout << "After swapByValue: " << num1 << " " << num2 << endl;
 num1 = 7;
 num2 = 13;
 // Call by Reference
 cout << "Before swapByReference: " << num1 << " " << num2 << endl;
 swapByReference(num1, num2);
 cout << "After swapByReference: " << num1 << " " << num2 << endl;
 return 0;
}
void swapByValue(int a, int b) {
 int temp = a;
 a = b;
 b = temp;
}
// Function to swap two integers using call by reference
void swapByReference(int &a, int &b) {
 int temp = a;
 a = b;
 b = temp;
}
