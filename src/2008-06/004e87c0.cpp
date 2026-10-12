// from server: 65% by king_originala
extern "C" void* __cdecl allocate_aligned(unsigned int, unsigned int);
extern "C" void* __cdecl fill_memory(void*, int, unsigned int);

struct Array
{
    int count;
    void* data;
    int capacity;

    Array();
    virtual ~Array();
    Array& operator=(const Array&);
    void clear();
    void copy(const Array&);
};

__forceinline Array::Array()
{
    capacity = 10;
    count = 0;
    data = allocate_aligned(40, 16);
    fill_memory(data, 0, capacity * 4);
}

__forceinline Array::~Array()
{
    clear();
}

__forceinline Array& Array::operator=(const Array& other)
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
    int first;
    int owner;
    Array values;
    int last;

    S(int, Array, int, int);
};

S::S(int ownerValue, Array source, int firstValue, int lastValue)
    : owner(0)
{
    owner = ownerValue;
    values = source;
    first = firstValue;
    last = lastValue;
}
