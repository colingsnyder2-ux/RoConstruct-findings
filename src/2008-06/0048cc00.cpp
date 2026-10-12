// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    __forceinline void addRef();
    __forceinline void release();
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

struct SharedCount {
    Control* control;

    __forceinline SharedCount(const SharedCount&);
    __forceinline ~SharedCount();
};

__forceinline SharedCount::SharedCount(const SharedCount& value)
    : control(value.control)
{
    if (control)
        control->addRef();
}

__forceinline SharedCount::~SharedCount()
{
    if (control)
        control->release();
}

struct Shared {
    void* pointer;
    SharedCount count;

    Shared(Shared value, int tag);
};

struct Result {
    int key;
    Shared value;

    __forceinline Result(int, const Shared&);
};

__forceinline Result::Result(int keyValue, const Shared& sharedValue)
    : key(keyValue), value(sharedValue)
{
}

Result __cdecl convert(int key, Shared value, int tag)
{
    return Result(key, Shared(value, tag));
}
