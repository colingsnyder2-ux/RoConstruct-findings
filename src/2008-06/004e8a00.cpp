// from server: 65% by king_originala
extern void* __cdecl allocate(unsigned int, unsigned int);
extern void* __cdecl fill(void*, int, unsigned int);

struct Buffer
{
    int size;
    void* data;
    int capacity;

    Buffer();
    virtual ~Buffer();
    Buffer& operator=(const Buffer&);
    void clear();
    void copy(const Buffer&);
};

inline Buffer::Buffer()
{
    capacity = 10;
    size = 0;
    data = allocate(40, 16);
    fill(data, 0, capacity * 4);
}

inline Buffer::~Buffer()
{
    clear();
}

inline Buffer& Buffer::operator=(const Buffer& other)
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
    int second;
    Buffer buffer;
    int last;

    S(int, Buffer, int, int);
};

S::S(int a, Buffer b, int c, int d) : second(0)
{
    second = a;
    buffer = b;
    first = c;
    last = d;
}
