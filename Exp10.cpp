#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void get() { cin >> name >> age; }
    void display() { cout << name << " " << age << endl; }
};
class Student : public Person {
    int roll;
public:
    void getdata() { cin >> roll; }
    void showDetails() { cout << roll << endl; }
};
int main() {
    Student s;
    s.get();
    s.getdata();
    s.display();
    s.showDetails();
}
