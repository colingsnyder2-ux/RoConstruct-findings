// from server: 59% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->references, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 0)
            p->destroy();
    }
}

struct Value {
    unsigned char storage[56];
    Value(void*, Shared);
    Value(const Value&);
    ~Value();
};

struct Entry {
    void* key;
    Value value;
    Entry(void*, const Value&);
    Entry(const Entry&);
};

__forceinline Entry::Entry(void* p, const Value& v)
    : key(p), value(v)
{
}

__forceinline Entry::Entry(const Entry& other)
    : key(other.key), value(other.value)
{
}

struct Container;

struct Iterator {
    Container** owner;
    unsigned char* node;
};

struct Container {
    Container** owner;
    unsigned char padding[20];
    unsigned char* end;
    unsigned char padding2[4];
    void* descriptor;

    Iterator find(void* const&);
    Iterator insert(const Entry&);
    void* f(Shared);
};

void* Container::f(Shared argument)
{
    void* key = argument.pointer;
    Iterator position = find(key);
    Container** identity = position.owner;
    unsigned char* last = end;
    Container** expected = owner;

    if (!identity || identity != expected)
        _invalid_parameter_noinfo();

    unsigned char* node = position.node;

    if (node == last) {
        Value value(descriptor, argument);
        Entry first(argument.pointer, value);
        Entry second(first);
        Iterator result = insert(second);
        identity = result.owner;
        node = result.node;
    }

    if (identity)
        identity = reinterpret_cast<Container**>(*identity);
    else
        _invalid_parameter_noinfo();

    if (node == reinterpret_cast<Container*>(identity)->end)
        _invalid_parameter_noinfo();

    return node + 16;
}
