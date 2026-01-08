#include "vector.h"

using namespace MyImpl;

template <class T>
Vector<T>::Vector() : arr_start(new T[]), arr_end(arr_start), capacity_(2), size_(0), reserved_length_(2) {}

template <class T>
Vector<T>::Vector(std::size_t initial_size) : arr_start(new T[]), arr_end(arr_start), capacity_(initial_size), size_(0), reserved_length_(2) {}

template <class T>
std::size_t Vector<T>::size() const {
    return arr_end_ - arr_start_;
}

template <class T>
void Vector<T>::resize(std::size_t new_capacity) {
    std::size_t abs_diff = std::abs(new_capacity - this->capacity_);
    if new_capacity >= this->capacity_ {
        arr_end_ += abs_diff;
        this->capacity += diff;
        return;
    }

    capacity_ -= abs_diff;
    arr_end_ -= abs_diff;
    if capacity_ < size_ {
        size_ = capacity_;
    }
}

template <class T>
void Vector<T>::reserve(std::size_t min_length) {
    
}