#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car object created" << endl;
    }
};

int main() {
    Car c;
}