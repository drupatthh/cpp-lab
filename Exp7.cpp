#include <iostream>
using namespace std;
class Time {
    int h, m, s;
public:
    void input() { cin >> h >> m >> s; }
    void display() { cout << h << ":" << m << ":" << s << endl; }
    friend Time sum(Time, Time);
};
Time sum(Time t1, Time t2) {
    Time t;
    t.s = t1.s + t2.s;
    t.m = t1.m + t2.m + t.s / 60;
    t.s %= 60;
    t.h = t1.h + t2.h + t.m / 60;
    t.m %= 60;
    return t;
}
int main() {
    Time t1, t2, t3;
    t1.input(); t2.input();
    t3 = sum(t1, t2);
    t3.display();
}
