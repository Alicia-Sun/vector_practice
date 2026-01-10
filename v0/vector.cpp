#include <algorithm>
#include <iostream>
#include "vector.h"

using namespace MyImpl;

template <class T>
Vector<T>::Vector() : arr_(new T[2]()), capacity_(2), size_(0) {}

template <class T>
Vector<T>::Vector(std::size_t initial_size) : arr_(new T[initial_size]()), capacity_(initial_size), size_(0) {}

template <class T>
std::size_t Vector<T>::size() const {
    return this->size_;
}

template <class T>
void Vector<T>::resize(std::size_t new_capacity) {
    if (new_capacity <= this->capacity_) {
        // Do not reallocate a new array
        this->size_ = std::min(this->size_, new_capacity);
    } else {
        // New array allocation
        T* new_arr = new T[new_capacity]();
        for (size_t i = 0; i < std::min(new_capacity, this->size_); ++i) {
            new_arr[i] = arr_[i];
        }
        arr_ = new_arr;
        this->capacity_ = new_capacity;
    }
}

template <class T>
void Vector<T>::reserve(std::size_t min_length) {
    if (min_length > this->capacity_) {
        this->capacity_ = min_length;
    }
}

template <class T>
T& Vector<T>::operator[](int index) {
    if (index < 0 || index >= int(this->size_)) {
        throw std::out_of_range("Index out of range");
    }
    return this->arr_[index];
}

template <class T>
void Vector<T>::append(const T& new_ele) {
    if (this->size_ == this->capacity_) {
        // Double the capacity
        resize(this->capacity_ * 2);
    }
    this->arr_[this->size_] = new_ele;
    this->size_++;
}

template <class T>
T& Vector<T>::pop_back() {
    if (this->size_ == 0) {
        throw std::runtime_error("Empty vector");
    }
    this->size_--;
    return this->arr_[this->size_];
}

template <class T>
void Vector<T>::insert(const T& new_ele, std::size_t index) {
    if (this->size_ == this->capacity_) {
        // Double the capacity
        resize(this->capacity_ * 2);
    }
    for (auto i = this->size_ - 1; i >= index; --i) {
        this->arr_[i + 1] = this->arr_[i];
    }
    this->arr_[index] = new_ele;
    this->size_++;
}

template <class T>
void Vector<T>::print() {
    std::cout << "[";
    for (int i = 0; i < int(this->size_) - 1; ++i) {
        std::cout << this->arr_[i] << ",";
    }
    if (this->size_ != 0) {
        std::cout << this->arr_[this->size_ - 1];
    }
    std::cout << "]" << std::endl;
}

template class MyImpl::Vector<int>;