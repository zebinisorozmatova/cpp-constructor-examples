#include <iostream>
using namespace std;

class Number {
public:
    Number(int x) {
        cout << "Number: " << x << endl;
    }
};

int main() {
    Number n(25);
    return 0;
}