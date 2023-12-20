#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize the complex number
    ComplexNumber(double realPart = 0.0, double imaginaryPart = 0.0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Member function for operator overloading (addition)
    ComplexNumber operator+(const ComplexNumber& other) const {
        ComplexNumber result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    // Friend function for operator overloading (addition)
    friend ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);

    // Display function to show the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

// Friend function definition (addition)
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) {
    ComplexNumber result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    // Creating complex numbers
    ComplexNumber num1(3.0, 4.0);
    ComplexNumber num2(1.5, 2.5);

    // Using member function for addition
    ComplexNumber sum1 = num1 + num2;
    std::cout << "Sum using member function: ";
    sum1.display();

    // Using friend function for addition
    ComplexNumber sum2 = num1 + num2;
    std::cout << "Sum using friend function: ";
    sum2.display();

    return 0;
}
