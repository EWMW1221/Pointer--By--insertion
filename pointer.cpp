#include<iostream>
using namespace std;

void pointerInsertionSort(int* arr[], int n) {
    for (int i = 1; i < n; i++) {
        int* key = arr[i];       
        int j = i - 1;
        while (j >= 0 && *arr[j] > *key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  
    }
}

int main() {
    int a = 30, b = 20, c = 50, d = 10;
    int* arr[] = {&a, &b, &c, &d};  
    int n = sizeof(arr) / sizeof(arr[0]);

    pointerInsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << *arr[i] << " ";  
    }

    return 0;
}
