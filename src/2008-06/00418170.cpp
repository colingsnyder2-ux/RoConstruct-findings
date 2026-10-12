// from server: 88% by king_originala
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

    void addRef();
    void release();
};

inline void Control::addRef()
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

struct Pointer {
    void* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
};

inline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

inline Pointer::~Pointer()
{
    if (control)
        control->release();
}

struct Base {
    char storage[12];
    Base(Pointer, int);
    ~Base();
};

struct S : Base {
    int value;
    S(Pointer, int, int);
};

S::S(Pointer pointer, int argument, int initialValue)
    : Base(pointer, argument), value(initialValue)
{
}
