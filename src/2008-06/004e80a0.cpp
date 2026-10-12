// from server: 98% by king_originala
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

    void add_ref_copy();
    void release();
};

inline void Control::add_ref_copy()
{
    _InterlockedExchangeAdd(&strong, 1);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->add_ref_copy();
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Holder {
    void* first;
    void* second;
    void invoke(void*, Shared);
};

void dispatch(Holder* holder, Shared value)
{
    holder->invoke(holder->second, value);
}
