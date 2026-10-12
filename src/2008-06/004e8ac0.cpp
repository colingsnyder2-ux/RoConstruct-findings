// from server: 65% by king_originala
extern void* __cdecl allocate(unsigned int, unsigned int);
extern void* __cdecl fill(void*, int, unsigned int);

struct Array
{
    int count;
    void* data;
    int capacity;

    Array();
    virtual ~Array();
    void clear();
    void copy(const Array&);
};

inline Array::Array()
{
    capacity = 10;
    count = 0;
    data = allocate(40, 16);
    fill(data, 0, capacity * 4);
}

inline Array::~Array()
{
    clear();
}

struct Plugin
{
    void* first;
    void* second;
    Array values;
    void* last;

    Plugin(void*, Array, void*, void*);
};

Plugin::Plugin(void* p, Array a, void* q, void* r)
    : second(0)
{
    second = p;
    if (&values != &a)
    {
        values.clear();
        values.copy(a);
    }
    first = q;
    last = r;
}
