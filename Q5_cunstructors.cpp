#include <iostream>

class MyClass {
private:
    int data;

public:
    // a. No-argument constructor
    MyClass() {
        data = 0;
    }

    // b. One-argument constructor
    MyClass(int value) {
        data = value;
    }

    // c. Two-argument constructor
    MyClass(int value1, int value2) {
        data = value1 + value2;
    }

    // d. Copy constructor
    MyClass(const MyClass &other) {
        data = other.data;
    }

    // e. Dynamic constructor
    MyClass(int* dynamicData) {
        if (dynamicData != nullptr) {
            data = *dynamicData;
        } else {
            data = 0;
        }
    }

    // Display function to show the data
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Testing various constructors
    MyClass obj1; // No-argument constructor
    obj1.display();

    MyClass obj2(42); // One-argument constructor
    obj2.display();

    MyClass obj3(10, 20); // Two-argument constructor
    obj3.display();

    MyClass obj4(obj3); // Copy constructor
    obj4.display();

    int* dynamicData = new int(99);
    MyClass obj5(dynamicData); // Dynamic constructor
    obj5.display();

    delete dynamicData; // Release the dynamically allocated memory

    return 0;
}
