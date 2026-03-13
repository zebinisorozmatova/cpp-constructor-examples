#include <iostream>
using namespace std;

class Hello {
public:
    Hello() {
        cout << "Hello from constructor!" << endl;
    }
};

int main() {
    Hello h;
    return 0;
}