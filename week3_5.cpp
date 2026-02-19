#include <iostream>
#include <vector>
#include <algorithm>  // For sort, find, count
using namespace std;

int main() {
    vector<int> v;
    int n, element, searchValue, countValue;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Insert elements into vector
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        v.push_back(element);
    }

    // Display original vector
    cout << "\nOriginal Vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    // 1. SORT algorithm
    sort(v.begin(), v.end());
    cout << "\nSorted Vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    // 2. FIND algorithm
    cout << "\n\nEnter element to find: ";
    cin >> searchValue;

    auto it = find(v.begin(), v.end(), searchValue);
    if (it != v.end()) {
        cout << "Element " << searchValue << " found at position: "
             << (it - v.begin()) << endl;
    } else {
        cout << "Element not found in vector." << endl;
    }

    // 3. COUNT algorithm
    cout << "Enter element to count occurrences: ";
    cin >> countValue;

    int c = count(v.begin(), v.end(), countValue);
    cout << "Element " << countValue << " occurs " << c << " times in vector." << endl;

    return 0;
}
