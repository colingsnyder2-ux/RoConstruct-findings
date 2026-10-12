// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef void (__cdecl* Check)();
extern "C" Check invalid_parameter_noinfo;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Entry {
    void* value;
    unsigned long other;
};

struct Iterator {
    Proxy* proxy;
    Entry* position;
    Iterator(Proxy*, Entry*);
    bool different(const Iterator&, Check) const;
    void* value(Check) const;
    void advance(Check);
};

struct Vector {
    Proxy* proxy;
    unsigned long padding[2];
    Entry* first;
    Entry* last;
};

inline Iterator::Iterator(Proxy* p, Entry* e)
    : proxy(p), position(e)
{
}

inline bool Iterator::different(const Iterator& other, Check check) const
{
    if (!proxy || proxy != other.proxy)
        check();
    return position != other.position;
}

inline void* Iterator::value(Check check) const
{
    if (!proxy)
        check();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        check();
    return position->value;
}

inline void Iterator::advance(Check check)
{
    if (!proxy)
        check();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        check();
    ++position;
}

struct Shared {
    Vector* pointer;
    Control* control;
    ~Shared();
};

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
    Vector* pointer;
    Control* control;
    Shared get();
};

struct S {
    unsigned char padding[0x108];
    Holder holder;
    void f(void (__cdecl*)(void*));
};

void S::f(void (__cdecl* callback)(void*))
{
    if (holder.pointer) {
        Shared shared = holder.get();
        Vector* vector = shared.pointer;
        Check check = invalid_parameter_noinfo;

        Entry* last = vector->last;
        if (vector->first > last)
            check();
        Iterator finish(vector->proxy, last);

        Entry* first = vector->first;
        if (first > vector->last)
            check();
        Iterator current(vector->proxy, first);

        while (current.different(finish, check)) {
            callback(current.value(check));
            current.advance(check);
        }
    }
}
