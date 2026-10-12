// from server: 92% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Buffer
{
    unsigned int a, b, c, d, e, f;
};

struct Object
{
    unsigned char storage[40];
    Object();
};

struct Count
{
    void* pointer;
    Count();
    ~Count();
};

inline Count::Count() : pointer(0) {}

struct Owner
{
    void* pointer;
    Count control;

    Owner();
    ~Owner();
    void reset(Object*);
    void finish();
};

inline Owner::Owner() : pointer(0), control() {}

struct Callback
{
    unsigned int manager;
    unsigned char storage[28];

    Callback(Buffer);
    ~Callback();
    void initialize(const Buffer&);
};

inline Callback::Callback(Buffer value) : manager(0)
{
    initialize(value);
}

struct S : Owner
{
    Callback callback;
    S(const Buffer&);
};

S::S(const Buffer& value)
    : callback(value)
{
    reset(new Object);
    finish();
}
