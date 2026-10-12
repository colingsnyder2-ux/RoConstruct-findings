// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Count {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Count* count;
    ~Shared();
};

inline Shared::~Shared()
{
    Count* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Member150 {
    unsigned int data[5];
    ~Member150();
};

struct Member164 {
    unsigned int data;
    ~Member164();
};

struct Base {
    volatile unsigned int data[82];
    ~Base();
};

struct S : Base {
    Shared shared;
    Member150 member150;
    Member164 member164;
    ~S();
};

S::~S()
{
    data[0] = 0x0082367C;
    data[4] = 0x00823670;
    data[5] = 0x00823668;
    data[8] = 0x00823660;
    data[9] = 0x00823650;
    data[17] = 0x00823640;
    data[25] = 0x00823630;
    data[33] = 0x00823620;
    data[41] = 0x00823610;
    data[49] = 0x00823600;
    data[76] = 0x008235D0;
    data[77] = 0x008235C4;
    _ReadWriteBarrier();
}
