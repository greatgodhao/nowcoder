#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    
    // write your code here......
    for(int i = 1; i < 6; i++) {
        for(int j = 0; j < 6 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < len; i++) 
        cout << arr[i] << ' ';
    
    return 0;
}
