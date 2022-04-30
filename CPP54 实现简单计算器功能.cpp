#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));

    // write your code here......
    char* msg[30] = {str, nullptr};
    int i = 0;
    while((msg[i] = strtok(msg[i], " ")) && ++i );
    char* op = msg[0];
    int num1 = atoi(msg[1]);
    int num2 = atoi(msg[2]);
      
    if (strcasecmp(op, "add") == 0) {
        cout << num1 + num2 << endl;
    }
    else if (strcasecmp(op, "sub") == 0) {
        cout << num1 - num2 << endl;
    }
    else if (strcasecmp(op, "mul") == 0) {
        cout << num1 * num2 << endl;
    }
    else if (strcasecmp(op, "div") == 0) {
        if (num2 == 0) {
            cout << "Error" << endl;
        }
        else {
            cout << (double)num1 / num2 << endl;
        }
    }
    return 0;
}
