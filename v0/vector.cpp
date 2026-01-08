#include <algorithm>
#include "vector.h"

using namespace MyImpl;

template <class T>
Vector<T>::Vector() : arr_start_(new T[2]()), capacity_(2), size_(0), reserved_length_(2) {}

template <class T>
Vector<T>::Vector(std::size_t initial_size) : arr_start_(new T[initial_size]()), capacity_(initial_size), size_(0), reserved_length_(initial_size) {}

template <class T>
std::size_t Vector<T>::size() const {
    return this->size_;
}

template <class T>
void Vector<T>::resize(std::size_t new_capacity) {
    if (new_capacity <= reserved_length_) {
        // Do not reallocate a new array
        this->size_ = std::min(this->size_, new_capacity);
    } else {
        // New array allocation
        T* new_arr = new T[new_capacity]();
        for (size_t i = 0; i < std::min(new_capacity, this->size_); ++i) {
            new_arr[i] = arr_start_[i];
        }
        arr_start_ = new_arr;
        this->capacity_ = new_capacity;
    }
}

template <class T>
void Vector<T>::reserve(std::size_t min_length) {

}

template class MyImpl::Vector<int>;