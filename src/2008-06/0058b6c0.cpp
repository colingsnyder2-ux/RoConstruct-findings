// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual ~Control();
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
    if (p && _InterlockedDecrement(&p->references) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weakReferences) == 0)
            p->destroy();
    }
}

struct Value {
    unsigned char storage[56];
    Value(void*, Shared);
    Value(const Value&);
    ~Value();
};

struct InputEntry {
    void* key;
    Value value;
    InputEntry(void*, const Value&);
};

struct Entry {
    void* const key;
    Value value;
    Entry(const InputEntry&);
};

__forceinline InputEntry::InputEntry(void* p, const Value& v)
    : key(p), value(v)
{
}

__forceinline Entry::Entry(const InputEntry& other)
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

    Iterator* find(Iterator*, void* const&);
    Iterator* insert(Iterator*, const Entry&);
    void* f(Shared);
};

void* Container::f(Shared argument)
{
    void* key = argument.pointer;
    Iterator position;
    find(&position, key);

    Container** identity = position.owner;
    unsigned char* last = end;
    Container** expected = owner;

    if (!identity || identity != expected)
        _invalid_parameter_noinfo();

    unsigned char* node = position.node;

    if (node == last) {
        Iterator* result = insert(
            &position,
            Entry(InputEntry(argument.pointer, Value(descriptor, argument))));
        identity = result->owner;
        node = result->node;
    }

    if (!identity)
        _invalid_parameter_noinfo();
    else
        identity = reinterpret_cast<Container**>(*identity);

    if (node == reinterpret_cast<Container*>(identity)->end)
        _invalid_parameter_noinfo();

    node += 16;
    return node;
}
