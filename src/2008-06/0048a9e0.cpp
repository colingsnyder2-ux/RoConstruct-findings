// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType;
extern unsigned char modelInstanceType;

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Count {
    Control* p;
    Count();
    Count(const Count&);
    ~Count();
    Count& operator=(const Count&);
};

inline Count::Count() : p(0)
{
}

inline Count::Count(const Count& other) : p(other.p)
{
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

inline Count::~Count()
{
    if (p)
        p->release();
}

struct Source {
    void* pointer;
    Count count;
};

struct S {
    void* pointer;
    Count count;
    S(const Source&, int);
};

S::S(const Source& source, int)
    : pointer(__RTDynamicCast(source.pointer, 0,
                              &instanceType, &modelInstanceType, 0)),
      count(source.count)
{
    if (!pointer)
        count = Count();
}
