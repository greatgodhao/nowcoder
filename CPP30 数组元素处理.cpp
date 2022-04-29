#include <iostream>
using namespace std;

void func(int* p, int n);

int main() {

    int arr[6] = { 0 };
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    func(arr, 6);

    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            cout << arr[i] << endl;
        }
        else {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

void func(int* p, int n) {

    // write your code here......
    for(int i = 0; i < 6; i++) {
        int j = i;
        while(j < 6 && p[i] == 0) {
            swap(p[i], p[j++]);
        }
    }
}














