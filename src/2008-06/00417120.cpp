// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedCount {
    Control* control;
    ~SharedCount();
};

inline SharedCount::~SharedCount()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Mutex {
    ~Mutex();
};

struct Holder {
    char padding[16];
    SharedCount count;
    Mutex mutex;
    ~Holder();
};

Holder::~Holder()
{
}
