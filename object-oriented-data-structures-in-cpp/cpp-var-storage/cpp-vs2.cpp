#include <iostream>

namespace uiuc {
class Cube {
  public:
    Cube(double length){
        length_ = length;
        std::cout << "Created $" << getVolume() << std::endl;
    }
    
    Cube(const Cube & obj){
        length_ = obj.length_;
        std::cout << "Created $" << getVolume() << " via copy" << std::endl;
    }

    Cube& operator=(const Cube& obj){
        std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
        length_ = obj.length_;
        return *this;
    }
    // const because it only reads class members and doesn't modify them
    double getVolume() const {
        return length_ * length_ * length_;
    };
    // const because it only reads class members and doesn't modify them
    double getSurfaceArea() const {
        return 6 * length_ * length_;
    };
    // not const because it does modify them
    void setLength(double length){
        length_ = length;
    };
  private: 
    double length_;
};
}

// bool sendCube(uiuc::Cube c)
// {
//     return true;
// }

// bool sendCube(uiuc::Cube &c)
// {
//     return true;
// }

bool sendCube(uiuc::Cube *c)
{
    return true;
}


int main(){
    // // assignment-transformed
    // uiuc::Cube c(5);
    // uiuc::Cube d(6);
    // c = d;

    // // copy
    // uiuc::Cube c(5);
    // uiuc::Cube myCube = c;

    // uiuc::Cube c(10);
    // // this one is also show same Cube.
    // uiuc::Cube & myCube = c;

    // uiuc::Cube c(10);
    // uiuc::Cube *myCube = &c;

    // uiuc::Cube c(10);
    // // pass by value so that copy of this goes to sendCube() function
    // sendCube(c);
    
    // uiuc::Cube c(10);
    // // // pass by reference so that created one goes to sendCube() function
    // sendCube(c);

    uiuc::Cube c(10);
    // pass by pointer so that created one goes to sendCube() function
    sendCube(&c);

    return (0);
}
