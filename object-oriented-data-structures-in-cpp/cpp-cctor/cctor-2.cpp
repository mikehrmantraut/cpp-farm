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


int main(){
    
    // default ctor invoked
    Cctor c; 
    // because we're initializing this variable, 
    // and this variable is taken on the value of c, 
    // the value in c is copied into my cube
    Cctor d = c; 
    
    return 0;
}
