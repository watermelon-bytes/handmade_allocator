template <typename type>
struct Hash_List {
    type    *next, 
            *previous, 
            value;
public:
    void    add(type& elem),
            remove(type& elem),
            sort(),
            template <typename function>
            foreach(function f); 
};
