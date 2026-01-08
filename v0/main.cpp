#include <iostream>
#include "vector.h"

int main() {
    MyImpl::Vector<int> v = MyImpl::Vector<int>();
    v.append(1);
    v.append(2);
    v.append(3);
    std::cout << v.pop_back() << std::endl;
    std::cout << v[0] << ", " << v[1] << std::endl;
    int err_int = v[2];

    return 0;
}