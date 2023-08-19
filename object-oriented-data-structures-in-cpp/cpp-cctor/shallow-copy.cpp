#include <iostream>

class Pair {
public:
    int *pa, *pb;
    Pair (int a, int b) {
        pa = new int;
        pb = new int;
        *pa = a;
        *pb = b;
    };
    Pair (const Pair &p){
        // shallow copy yaptigimizda adresler ayni yeri gosterdigi
        // icin copy'de yapilan degisiklik default constructorda da
        // gozlemlenecektir.
        pa = p.pa;
        pb = p.pb;
        *pa = 100;
        *pb = 200;
    };
    ~Pair (){
        delete pa;
        delete pb;
    };
};

int main() {
    Pair p(15, 16);
    Pair q(p);

    std::cout << *(p.pa) << std::endl;
    std::cout << *(p.pb) << std::endl;
    std::cout << *(q.pa) << std::endl;
    std::cout << *(q.pb) << std::endl;
}
