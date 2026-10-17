// from server: 68% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Descriptor;

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Guard {
    Descriptor* owner;
    void* pointer;
    Control* control;

    Guard* acquire(int, void*);
    void finish();
    ~Guard();
};

struct Object {
    char storage[0x50];
    Object(Descriptor*, void*);
};

struct Descriptor {
    void attach(Object*);
    void f(void*);
};

inline Guard::~Guard()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
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
}
