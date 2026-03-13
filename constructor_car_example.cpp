#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    Car(string brand) {
        cout << "Car brand: " << brand << endl;
    }
};

int main() {
    Car c("BMW");
}