#include <iostream>
using namespace std;
class Num {
    int x;
public:
    void input() { cin >> x; }
    void display() { cout << x << endl; }
    void operator++() { ++x; }
};
int main() {
    Num n;
    n.input();
    ++n;
    n.display();
}
