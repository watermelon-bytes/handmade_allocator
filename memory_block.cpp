#include "memory_block.hpp"
#include "list.hpp"

template <typename type>
Global_Heap::Global_Heap(size_t n) {
    void *first_block = calloc(n);
    if (first_block == nullptr) {}
}
