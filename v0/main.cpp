#include <iostream>
#include "vector.h"

int main() {
    MyImpl::Vector<int> v = MyImpl::Vector<int>();
    std::cout << "Initial vector: "; v.print();
    v.append(1);
    v.append(2);
    v.append(3);
    std::cout << "Popping from bacK: " << v.pop_back() << std::endl;
    std::cout << "Vector now: "; v.print();
    int err_int = v[2];

    return 0;
}