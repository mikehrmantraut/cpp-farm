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
    Cctor& operator=(const Cctor& obj)
    {
        std::cout << "assignment operator invoked" << std::endl;
        return *this;
    }
};

int main(){
    
    Cctor c; // default ctor invoked
    Cctor c2; // default ctor invoked

    c2 = c; // assignment operator invoked
    return 0;
}
