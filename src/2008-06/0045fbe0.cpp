// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct CustomObject {
    void (__stdcall **table)(CustomObject*);
};

struct CustomOwner {
    CustomObject* pointer;
    ~CustomOwner();
};

inline CustomOwner::~CustomOwner()
{
    CustomObject* p = pointer;
    if (p)
        p->table[2](p);
}

struct VirtualObject {
    virtual ~VirtualObject();
};

struct VirtualOwner {
    VirtualObject* pointer;
    ~VirtualOwner();
};

inline VirtualOwner::~VirtualOwner()
{
    if (pointer)
        delete pointer;
}

struct AdjustedObject {
    virtual void unused();
    virtual void destroy(unsigned int);
};

struct AdjustedOwner {
    char* pointer;
    ~AdjustedOwner();
};

inline AdjustedOwner::~AdjustedOwner()
{
    if (pointer)
        reinterpret_cast<AdjustedObject*>(pointer + 0x28)->destroy(1);
}

struct NameItem {
    ~NameItem();
};

struct NameOwner {
    NameItem* pointer;
    ~NameOwner();
};

inline NameOwner::~NameOwner()
{
    if (pointer)
        delete pointer;
}

struct Base {
    volatile unsigned long table;
    char padding04[0x50];
    volatile unsigned long table54;
    volatile unsigned long table58;
    char padding5c[8];
    ~Base();
};

struct S : Base {
    Shared member64;
    CustomOwner member6c;
    Shared member70;
    Shared member78;
    unsigned long padding80;
    AdjustedOwner member84;
    char padding88[0x10];
    VirtualOwner member98;
    char padding9c[0x10];
    NameOwner memberac;
    VirtualOwner memberb0;
    VirtualOwner memberb4;

    void reset(int);
    ~S();
};

S::~S()
{
    table = 0x8199f4;
    table54 = 0x8199e8;
    table58 = 0x8199dc;
    _ReadWriteBarrier();
    reset(0);
}
