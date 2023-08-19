#include <iostream>

namespace uiuc {
class Cube {
  public:
    Cube(){
        std::cout << "Created $1 (default)" << std::endl;
    }
    Cube(double length){
        length_ = length;
        std::cout << "Created $" << getVolume() << std::endl;
    }
    
    Cube(const Cube & obj){
        length_ = obj.length_;
        std::cout << "Created $" << getVolume() << " via copy" << std::endl;
    }

    ~Cube(){
        std::cout << "Destroyed $" << getVolume() << std::endl;
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

double cube_on_stack() {
    uiuc::Cube c(3);
    return c.getVolume();
}

void cube_on_heap(){
    uiuc::Cube* c1 = new uiuc::Cube(10);
    uiuc::Cube* c2 = new uiuc::Cube;
    delete c1;
}

int main(){
    cube_on_stack();
    cube_on_heap();
    cube_on_stack();
    
    return (0);
}
