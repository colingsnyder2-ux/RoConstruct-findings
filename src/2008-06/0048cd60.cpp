// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void addRef();
    void release();
};

__forceinline void Control::addRef()
{
    _InterlockedIncrement(&strong);
}

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct S {
    S* f(Shared first, Shared second, int third, int fourth);
    void initialize(Shared first, Shared second, int third, int fourth);
};

S* S::f(Shared first, Shared second, int third, int fourth)
{
    initialize(first, second, third, fourth);
    return this;
}
