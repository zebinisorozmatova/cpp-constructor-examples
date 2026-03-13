#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object created!" << endl;
    }
};

int main() {
    Test a;
    Test b;
}