// from server: 73% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// v2: nil-local for control init (drives esi-allocation before this), no barrier.
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Descriptor;

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    __forceinline void release() {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Guard {
    Descriptor* owner;
    void* pointer;
    Control* control;

    Guard* acquire(int, void*);
    void finish();
    void release();
};

struct Object {
    char storage[0x50];
    Object(Descriptor*, void*);
};

struct Descriptor {
    void attach(Object*);
    void f(void*);
};

inline void Guard::release()
{
    if (control)
        control->release();
}

void Descriptor::f(void* value)
{
    Guard guard;
    guard.owner = this;
    guard.pointer = 0;
    guard.control = 0;
    if (value)
        guard.acquire(1, value)->finish();
    attach(new Object(this, value));
    guard.release();
}
