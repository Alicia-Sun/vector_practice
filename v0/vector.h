#pragma once

namespace MyImpl {

    template <class T>
    class vector {
    public:
        // Get's the current num elements in the vector
        std::size_t size();

        // Resizes the underlying array's capacity
        void resize(std::size_t new_capacity);

        // Reserves a minimum size for the underlying array
        void reserve(std::size_t min_size);

        // Index operator allowing read/write
        T& operator[](int index);

    private:
        // Ptr to start of array containing the underlying data
        T* arr_start;

        // Ptr to end of array containing the underlying data
        T* arr_end;

        // Maximum capacity of the vector (or length of underlying array) 
        std::size_t capacity;

        // How many elements currently in the vector
        std::size_t size;
    };
}