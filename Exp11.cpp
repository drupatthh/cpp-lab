#include <iostream>
using namespace std;
class BankAccount {
protected:
    int accno;
    float balance;
public:
    void input() { cin >> accno >> balance; }
    void deposit(float amt) { balance += amt; }
    void withdraw(float amt) { balance -= amt; }
};
class SavingsAccount : public BankAccount {
    float rate;
public:
    void setRate(float r) { rate = r; }
    void calculateInterest() { cout << "Interest: " << balance * rate / 100 << endl; }
};
class CurrentAccount : public BankAccount {
public:
    void serviceCharge() {
        if (balance < 1000) balance -= 100;
        cout << balance << endl;
    }
};
int main() {
    SavingsAccount s;
    s.input();
    s.setRate(5);
    s.calculateInterest();
    CurrentAccount c;
    c.input();
    c.serviceCharge();
}
