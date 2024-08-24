#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], mixedArray[20];
    int merged_size = 20;

    cout << "Enter elements in array 1:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Element "<< i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << "Enter elements in array 2:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Element "<< i + 1 << ": ";
        cin >> arr2[i];
    }

    for (int i = 0; i < 10; ++i) {
        mixedArray[i] = arr1[i];
    }
    for (int i = 0; i < 10; ++i) {
        mixedArray[10 + i] = arr2[i];
    }

    for (int i = 0; i < merged_size - 1; ++i) {
        for (int j = 0; j < merged_size - i - 1; ++j) {
            if (mixedArray[j] < mixedArray[j + 1]) {
                int temp = mixedArray[j];
                mixedArray[j] = mixedArray[j + 1];
                mixedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged array in descending order: ";
    for (int i = 0; i < merged_size; ++i) {
        cout << mixedArray[i] << " ";
    }
    cout << endl;
};