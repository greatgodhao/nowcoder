#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100] = { 0 };
    char substr[100] = { 0 };

    cin.getline(str, sizeof(str));
    cin.getline(substr, sizeof(substr));

    int count = 0;
    int j = 0;
    char* p = str;
    char* q = substr;
    // write your code here......
    while(*p)
    {
        if(*p == *q)
        {
            q++;
            j++;
            if(j == strlen(substr))
            {
                count++;
                j = 0;
                q = &substr[0];
                continue;
            }
            p++;
        }   
        else
        {
            p++;
            q = &substr[0];
            j = 0;
        }
    }
    cout << count << endl;
    return 0;
}
