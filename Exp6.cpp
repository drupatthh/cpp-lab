#include <iostream>
using namespace std;
class Bill {
    string name, address;
    long telno;
    int calls;
    friend void calc(Bill);
public:
    void input() { cin >> name >> address >> telno >> calls; }
};
void calc(Bill b) {
    cout << "Amount: " << b.calls * 2 << endl;
}
int main() {
    Bill b;
    b.input();
    calc(b);
}
