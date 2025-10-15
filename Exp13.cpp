#include <iostream>
using namespace std;
class c_polygon {
public:
    virtual float area() { return 0; }
};
class c_rectangle : public c_polygon {
    float l, b;
public:
    void input() { cin >> l >> b; }
    float area() { return l * b; }
};
class c_triangle : public c_polygon {
    float b, h;
public:
    void input() { cin >> b >> h; }
    float area() { return 0.5 * b * h; }
};
int main() {
    c_polygon *p;
    c_rectangle r;
    c_triangle t;
    r.input();
    t.input();
    p = &r;
    cout << p->area() << endl;
    p = &t;
    cout << p->area() << endl;
}
