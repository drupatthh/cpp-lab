#include <iostream>
using namespace std;
class Book {
    int BookID;
    string BookName;
    float BookPrice;
public:
    void input() {
        cin >> BookID >> BookName >> BookPrice;
    }
    void display() {
        cout << BookID << " " << BookName << " " << BookPrice << endl;
    }
    void total_cost(int n) {
        cout << "Total cost: " << BookPrice * n << endl;
    }
};
int main() {
    Book b1, b2, b3;
    b1.input(); b2.input(); b3.input();
    int n;
    cin >> n; b1.total_cost(n);
    cin >> n; b2.total_cost(n);
    cin >> n; b3.total_cost(n);
}
