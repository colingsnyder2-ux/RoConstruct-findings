// from server: 65% by king_originala
extern "C" void* __cdecl allocate(unsigned int, unsigned int);
extern "C" void* __cdecl fill(void*, int, unsigned int);

struct Array
{
    int size;
    void* data;
    int capacity;

    Array();
    virtual ~Array();
    void clear();
    void copy(const Array&);
    Array& operator=(const Array&);
};

inline Array::Array()
{
    capacity = 10;
    size = 0;
    data = allocate(40, 16);
    fill(data, 0, capacity * 4);
}

inline Array::~Array()
{
    clear();
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

struct Plugin
{
    int first;
    int second;
    Array array;
    int last;

    Plugin(int, Array, int, int);
};

Plugin::Plugin(int a, Array b, int c, int d)
    : second(0)
{
    second = a;
    array = b;
    first = c;
    last = d;
}
