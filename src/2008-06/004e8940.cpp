// from server: 73% by colin
//

//

extern "C" void* __cdecl allocate_buffer(unsigned int, unsigned int);
extern "C" void* __cdecl fill_buffer(void*, int, unsigned int);
extern const unsigned int array_table[];

struct Array
{
    const unsigned int* table;
    unsigned int size;
    void* data;
    unsigned int capacity;

    Array(unsigned int*);
    __declspec(dllimport) ~Array() throw();
    Array& operator=(const Array&);
    void clear();
    void copy(const Array&);
};

inline Array::Array(unsigned int* base)
{
    base[2] = reinterpret_cast<unsigned int>(array_table);
    base[5] = 10;
    base[3] = 0;
    void* p = allocate_buffer(40, 16);
    base[4] = reinterpret_cast<unsigned int>(p);
    fill_buffer(p, 0, base[5] * 4);
}

inline Array& Array::operator=(const Array& other)
{
    if (this != &other)
    {
        clear();
        copy(other);
    }
    return *this;
}

struct S
{
    unsigned int first;
    void* owner;
    Array values;
    unsigned int last;

    S(void*, Array, unsigned int, unsigned int);
};

S::S(void* p, Array a, unsigned int x, unsigned int y)
    : owner(0), values(reinterpret_cast<unsigned int*>(this))
{
    owner = p;
    values = a;
    first = x;
    last = y;
}
