// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct FactoryShared {
    void* object;
    Control* control;

    ~FactoryShared();
};

struct Shared {
    void* object;
    Control* control;

    Shared(const FactoryShared&);
    ~Shared();
};

__forceinline FactoryShared::~FactoryShared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

__forceinline Shared::Shared(const FactoryShared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

FactoryShared __cdecl makeShared(void*);

struct Event {
    void invoke(void*, Shared);
};

extern Event event;

struct Collection {
    void remove(void**);
};

struct S {
    char padding[0x138];
    Collection collection;

    void f(void*);
};

void S::f(void* value)
{
    collection.remove(&value);
    void* owner = this ? reinterpret_cast<char*>(this) + 0x14 : 0;
    event.invoke(owner, makeShared(value));
}
