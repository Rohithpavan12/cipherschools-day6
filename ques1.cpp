#include <iostream>

using namespace std;

int main() {
    int size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of the array: " << sum << endl;
    return 0;
}
