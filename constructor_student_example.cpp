#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string name) {
        cout << name << " is learning C++" << endl;
    }
};

int main() {
    Student s("Ali");
}