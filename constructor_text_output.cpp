#include <iostream>
using namespace std;

class Text {
public:
    Text() {
        cout << "Learning constructors in C++" << endl;
    }
};

int main() {
    Text t;
}