// from server: 71% by colin
extern "C" void* __cdecl allocate(unsigned int, unsigned int);
extern "C" void* __cdecl fill(void*, int, unsigned int);
extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl sub_4e7880(void*, void*);

struct Buffer
{
    int size;
    void* data;
    int capacity;

    Buffer();
    ~Buffer();
    Buffer& operator=(const Buffer&);
    void clear();
    void copy(const Buffer&);
};

Buffer::Buffer()
{
    capacity = 10;
    size = 0;
    data = allocate(40, 16);
    fill(data, 0, capacity * 4);
}

Buffer::~Buffer()
{
    clear();
}

Buffer& Buffer::operator=(const Buffer& other)
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

    S(int, Buffer, int, int, int);
};

S::S(int a, Buffer b, int c, int d, int e)
{
    second = 0;
    second = a;
    buffer = b;
    first = c;
    last = d;
}
