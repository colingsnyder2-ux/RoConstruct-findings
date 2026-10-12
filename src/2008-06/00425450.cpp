// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    RefCount* count;
    ~Handle();
};

struct Lock {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Lock* mutex;
    bool owned;
    Guard(Lock* p);
    ~Guard();
};

struct Iterator {
    void* values[3];
};

struct Tree {
    void lookup(Iterator* result, Handle* value);
};

struct Owner {
    void** vtable;
    char padding[0xc0];
    Lock mutex;
};

struct Node {
    char padding[0x50];
    unsigned char flags;
    char padding2[3];
    Owner* owner;
    unsigned int reserved;
    Tree tree;
    void invoke(int unused, Handle value);
};

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

__forceinline Guard::Guard(Lock* p)
    : mutex(p), owned(false)
{
    mutex->lock();
    owned = true;
}

__forceinline Guard::~Guard()
{
    if (owned)
        mutex->unlock();
}

void Node::invoke(int unused, Handle value)
{
    if (flags & 2) {
        Guard guard(&owner->mutex);
        Iterator result;
        tree.lookup(&result, &value);
    }

    typedef void (__thiscall *Notify)(Owner*, void*);
    ((Notify)owner->vtable[87])(owner, (char*)this - 4);
}
