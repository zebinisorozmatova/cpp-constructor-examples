#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string name) {
        cout << "Student: " << name << endl;
    }
};

int main() {
    Student s("Zebiniso");
}