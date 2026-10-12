// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void __cdecl alignedFree(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Holder {
    Control* control;
    ~Holder();
};

__forceinline Holder::~Holder()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Entry {
    void* object;
    Holder holder;
};

struct S {
    Entry* entries;
    int count;
    int capacity;
    void clear();
};

void S::clear()
{
    for (int i = 0; i < count; ++i)
        entries[i].holder.~Holder();

    alignedFree(entries);
    entries = 0;
    count = 0;
    capacity = 0;
}
