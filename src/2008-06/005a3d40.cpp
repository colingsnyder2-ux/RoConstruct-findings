// from server: 64% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

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
};

struct Holder {
    Control* control;
    ~Holder();
};

struct Object {
    char storage[0x50];
    Object(Descriptor*, void*);
};

struct Descriptor {
    void attach(Object*);
    void f(void*);
};

inline Holder::~Holder()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

void Descriptor::f(void* value)
{
    Guard guard = { this, 0, 0 };
    Holder holder = { 0 };
    if (value) {
        guard.acquire(1, value)->finish();
        holder.control = guard.control;
    }
    attach(new Object(this, value));
}
