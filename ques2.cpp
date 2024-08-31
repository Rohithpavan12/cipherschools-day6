#include <iostream>

using namespace std;

int main() {
    int size, sumOdd = 0, sumEven = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}
