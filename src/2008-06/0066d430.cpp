// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    char* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    Control* p = other.control;
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
        p->release();
}

struct Source {
    char data[8];
    Shared get();
};

bool __cdecl check(Shared);

struct S {
    char padding0[8];
    Source source;
    char padding1[20];
    char* result;

    void update();
};

void S::update()
{
    Shared value = source.get();
    Control* control = value.control;
    char* object = value.object;
    if (check(value))
        result = object + 0x228;
    else
        result = 0;
    value.control = control;
}
