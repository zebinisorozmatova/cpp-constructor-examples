#include <iostream>
using namespace std;

class Message {
public:
    Message() {
        cout << "Constructor is working!" << endl;
    }
};

int main() {
    Message m;
}