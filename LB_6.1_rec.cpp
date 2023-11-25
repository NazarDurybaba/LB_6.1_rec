#include <iostream>
#include <ctime>

using namespace std;

void generateArray(int* arr, int size, int min, int max) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int* arr, int size) {
    if (size > 0) {
        cout << arr[0] << " ";
        printArray(arr + 1, size - 1);
    }
    else {
        cout << endl;
    }
}

int countNegativeOrOdd(int* arr, int size) {
    if (size > 0) {
        return (arr[0] < 0 || arr[0] % 2 != 0 ? 1 : 0) + countNegativeOrOdd(arr + 1, size - 1);
    }
    else {
        return 0;
    }
}

int sumNegativeOrOdd(int* arr, int size) {
    if (size > 0) {
        return (arr[0] < 0 || arr[0] % 2 != 0 ? arr[0] : 0) + sumNegativeOrOdd(arr + 1, size - 1);
    }
    else {
        return 0;
    }
}

void replaceNegativeOrOddWithZero(int* arr, int size) {
    if (size > 0) {
        if (arr[0] < 0 || arr[0] % 2 != 0) {
            arr[0] = 0;
        }
        replaceNegativeOrOddWithZero(arr + 1, size - 1);
    }
}

int main() {
    const int size = 24;
    int arr[size];
    generateArray(arr, size, -50, 15);
    printArray(arr, size);
    int count = countNegativeOrOdd(arr, size);
    int sum = sumNegativeOrOdd(arr, size);
    replaceNegativeOrOddWithZero(arr, size);
    printArray(arr, size);
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}
