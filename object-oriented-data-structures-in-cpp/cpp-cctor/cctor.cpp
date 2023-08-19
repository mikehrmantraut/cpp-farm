#include <iostream>

class Cctor
{
    public:
    Cctor() {
        std::cout << "default ctor invoked" << std::endl;
    }
    Cctor(const Cctor& obj) {
        std::cout << "copy ctor invoked" << std::endl;
    }
};

Cctor foo()
{
    Cctor d; // default ctor invoked
    return d; // first copy ctor invoked when returning to main
}
int main(){
    Cctor d2 = foo(); // copying return value to d2 (second ctor invokation)
    return 0;
}


