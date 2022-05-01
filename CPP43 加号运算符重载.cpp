#include <iostream>
using namespace std;

class Time {

    public:
        int hours;      // 小时
        int minutes;    // 分钟

        Time() {
            hours = 0;
            minutes = 0;
        }

        Time(int h, int m) {
            this->hours = h;
            this->minutes = m;
        }

        void show() {
            cout << hours << " " << minutes << endl;
        }

        // write your code here......
        Time operator+(Time& a) {
            Time sum;
            sum.hours = hours + a.hours + (minutes + a.minutes) / 60;
            sum.minutes = (minutes + a.minutes) % 60;
            return sum;
        }

};

int main() {

    int h, m;
    cin >> h;
    cin >> m;

    Time t1(h, m);
    Time t2(2, 20);

    Time t3 = t1 + t2;
    t3.show();
    
    return 0;
}
