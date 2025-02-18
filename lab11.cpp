#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0, minIndex = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "\nOriginal array:\n";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " (Address: " << (arr + i) << ")\n";
    }

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 3 == 0) {
            sum += *(arr + i);
            count++;
        }
    }

    if (count == 0) {
        cout << "\nNo elements divisible by 3 found.\n";
        delete[] arr;
        return 0;
    }

    int min = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
            minIndex = i;
        }
    }

    cout << "\nSum of elements divisible by 3: " << sum << "\n";
    cout << "Minimum element: " << min << " (Address: " << (arr + minIndex) << ")\n";

    *(arr + minIndex) = sum;

    cout << "\nModified array:\n";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " (Address: " << (arr + i) << ")\n";
    }

    delete[] arr;
    return 0;
}

