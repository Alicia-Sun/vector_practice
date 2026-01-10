#pragma once
#include <cstddef>

namespace MyImpl {

    template <class T>
    class Vector {
    public:
        // Initializers
        Vector();
        Vector(std::size_t initial_size);
        
        // Get's the current num elements in the vector
        std::size_t size() const;

        // Resizes the underlying array's capacity
        void resize(std::size_t new_capacity);

        // Reserves a minimum size for the underlying array
        void reserve(std::size_t min_length);

        // Index operator allowing read/write
        T& operator[](int index);
        
        // Appends new_ele to back of vector
        void append(const T& new_ele);

        // Removes and returns last element in vector
        T& pop_back();

        // Inserts element at specific index of vector
        void insert(const T& new_ele, std::size_t index);

        // Prints the string representation of vector
        void print();

    private:
        // Ptr to reserved start of array containing the underlying data
        T* arr_;

        // Maximum capacity of the vector (or length of underlying array) 
        std::size_t capacity_;

        // How many elements currently in the vector
        std::size_t size_;
    };
}