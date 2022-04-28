#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    
    // write your code here......
    for(int i = 0; i < len - 1; i++) {
        int min = i;
        for(int j = i + 1; j < len; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        } 
        swap(arr[i], arr[min]);
    }
    for(int i = 0; i < len; i++) cout << arr[i] << ' ';
    return 0;
}
