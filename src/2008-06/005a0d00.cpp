// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

extern void (__thiscall* stringDestructor)(void*);

struct String {
    char storage[28];
    ~String();
};

inline String::~String()
{
    stringDestructor(this);
}

struct Base {
    char storage[28];
    ~Base();
};

struct S : Base {
    Shared shared;
    char padding[8];
    String text;
    ~S();
};

S::~S()
{
}
