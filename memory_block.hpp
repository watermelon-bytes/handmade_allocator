enum class ReturnCode {

};

template <typename type>
class Global_Heap {
public:
    Global_Heap(size_t n); // initializes local memory access
    void* first_block;
    size_t total_memory;
    
    type* m_alloc(int count); 
    /*
    * Allocates sizeof(type) * count memory,
    * 
    * and returns 
    */

    void free(type* p_addr); 
    /* 
    * Takes address of 
    */

    ReturnCode expand(size_t n);
    ReturnCode narrow_down(size_t n);

    void reset(Piece addr);
};

/* 
* Usage Example (approximately):

*   Global_Heap my_heap(5000);
*   int* x = m_alloc();
*   cout << *x << endl;
*   free(x);
*/

template <typename type>
struct newPiece {
    void init(type* start, size_t bytes_count); /* calls Global_Heap::m_alloc(bytes_count) */
    type* start;
    size_t size_in_bytes;
};

/*
* Usage Example (approximately):
*   newPiece my_piece;
*   int x = 9; int* p_x = &x;
*   my_piece.init(p_x, )
*   
*   
*/