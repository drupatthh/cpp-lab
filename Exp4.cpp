#include <iostream>
using namespace std;
inline float area(float r) { return 3.14 * r * r; }
inline float area(int s) { return s * s; }
inline float area(float l, float b) { return l * b; }
inline float area_t(float b, float h) { return 0.5 * b * h; }
int main() {
    cout << area(5.0f) << endl;
    cout << area(4) << endl;
    cout << area(4.0f, 5.0f) << endl;
    cout << area_t(4.0f, 3.0f) << endl;
}
