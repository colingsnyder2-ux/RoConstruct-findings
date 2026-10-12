// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();
extern "C" void __cdecl alignedFree(void*);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Holder {
    void* object;
    Control* control;
    Shared get();
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared* first;
    Shared* last;
};

struct Buffer {
    void* data;
    unsigned long reserved[4];
    ~Buffer();
};

inline Buffer::~Buffer()
{
    alignedFree(data);
}

struct Operation {
    unsigned long storage[2];
    void apply(unsigned long, Shared, Buffer*);
};

struct S {
    unsigned char reserved[0x108];
    Holder children;
    void f(Operation, unsigned long, Buffer);
};

void S::f(Operation operation, unsigned long argument, Buffer buffer)
{
    if (children.object) {
        Shared snapshot = children.get();
        Vector* vector = static_cast<Vector*>(snapshot.object);
        Shared* end = vector->last;
        void (__cdecl* fail)() = invalid_parameter_noinfo;

        if (vector->first > end)
            fail();

        Shared* current = vector->first;
        Proxy* endProxy = vector->proxy;
        if (current > vector->last)
            fail();
        Proxy* proxy = vector->proxy;

        for (;;) {
            if (!proxy || proxy != endProxy)
                fail();
            if (current == end)
                break;

            if (!proxy)
                fail();
            Vector* owner = proxy ? proxy->container : 0;
            if (current >= owner->last)
                fail();

            operation.apply(argument, *current, &buffer);

            if (!proxy)
                fail();
            owner = proxy ? proxy->container : 0;
            if (current >= owner->last)
                fail();
            ++current;
        }
    }
}
