#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name) {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p("Ali");
    return 0;
}