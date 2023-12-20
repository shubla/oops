#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Vector example with integers
vector<int> numbers = {5, 2, 8, 1, 7};

    // Display the original vector
cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
cout << endl;

    // Sorting the vector using std::sort
sort(numbers.begin(), numbers.end());

    // Display the sorted vector
cout << "Sorted vector: ";
    for (int num : numbers) {
    cout << num << " ";
    }cout << endl;

    return 0;
}
