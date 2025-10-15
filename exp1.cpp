#include <iostream>
using namespace std;
class Car {
    string brand, model;
    int year;
public:
    void read() {
        cin >> brand >> model >> year;
    }
    void display() {
        cout << brand << " " << model << " " << year << endl;
    }
};
int main() {
    Car c1, c2, c3;
    c1.read(); c2.read(); c3.read();
    c1.display(); c2.display(); c3.display();
}
