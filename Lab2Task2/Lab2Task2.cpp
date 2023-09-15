#include <iostream>
using namespace std;

int Max(int arr[], size_t size) {
    int max = arr[0];

    for (size_t i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int myArray[] = { 5, 2, 9, 1, 8 };

    size_t arraySize = sizeof(myArray) / sizeof(myArray[0]);

    cout << Max(myArray,arraySize);
}
