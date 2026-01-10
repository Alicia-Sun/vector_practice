#include <iostream>
#include "v0/vector.h"

int main() {
    MyImpl::Vector<int> v = MyImpl::Vector<int>();
    std::cout << "Initial vector: "; v.print();
    std::cout << "Inserting 10 elements..." << std::endl;
    for (int i=0; i<10; ++i) {
        v.append(i);
    }
    std::cout << "Vector after inserting elements: "; v.print();
    std::cout << "Pop from back: " << v.pop_back() << std::endl;
    std::cout << "Pop from back: " << v.pop_back() << std::endl;
    std::cout << "Appending -1: " << std::endl; v.append(-1); 
    std::cout << "Vector now: "; v.print();
    std::cout << "Vector size: " << v.size() << std::endl;
    std::cout << "Eles at index 1 and 4: " << v[1] << ", " << v[4] << std::endl;
    std::cout << "Vector now: "; v.print();
    std::cout << "Inserting -5 at index 4..."; v.insert(-5, 4);
    std::cout << "Vector now: "; v.print();
    std::cout << "Trying to access index 11..." << std::endl;
    int err_int = v[11];

    return 0;
}