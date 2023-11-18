#include <iostream>
#include <iomanip>

using namespace std;

void inputArray(int *arr, int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }
}

void printArray(int *arr, int arrLength) {
    
    for (int i = 0; i < arrLength; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

int findSumMinMax(int *arr, int arrLength) {

    int min = 2147483647;
    int max = -2147483647;
    
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return max + min;
}


int main() {

    int n;
    cout << "Array size is: "; cin >> n;
    cout << endl;
    int* a = new int[n];

    inputArray(a, n);
    printArray(a, n);
    cout << "min + max = " << findSumMinMax(a, n);
}
