#include <iostream>
using namespace std;
class Rectangle {
    int length, width;
public:
    Rectangle() { length = 0; width = 0; }
    Rectangle(int l, int w) { length = l; width = w; }
    void display() { cout << length << " " << width << endl; }
    ~Rectangle() { cout << "Destructor called" << endl; }
};
int main() {
    Rectangle r1, r2(4, 5);
    r1.display();
    r2.display();
}
