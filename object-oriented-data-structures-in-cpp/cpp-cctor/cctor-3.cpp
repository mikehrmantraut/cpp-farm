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
    
    Cctor c; // default ctor invoked
    Cctor c2; // default ctor invoked

    c2 = c; // we already constructed these two Cctor, 
    // so that there is no output.
    return 0;
}
