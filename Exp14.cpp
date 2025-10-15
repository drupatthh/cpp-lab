#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int roll;
    string course;
public:
    void input() { cin >> name >> roll >> course; }
};
class Test : virtual public Student {
protected:
    int m1, m2, m3;
public:
    void inputTest() { cin >> m1 >> m2 >> m3; }
};
class GraceMarks : virtual public Student {
protected:
    int bonus;
public:
    void inputGrace() { cin >> bonus; }
};
class Result : public Test, public GraceMarks {
    int total;
public:
    void calculate() {
        total = m1 + m2 + m3 + bonus;
        cout << name << " " << roll << " " << course << " " << total << endl;
    }
};
int main() {
    Result r;
    r.input();
    r.inputTest();
    r.inputGrace();
    r.calculate();
}
