// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Part {
    char padding[0x228];
};

struct Shared {
    Part* ptr;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
                p->destroy();
        }
    }
}

struct Weak {
    Part* ptr;
    Control* control;
    Shared lock();
    Weak& operator=(const Shared&);
};

__forceinline Weak& Weak::operator=(const Shared& value)
{
    ptr = value.ptr;
    Control* incoming = value.control;
    if (incoming)
        _InterlockedExchangeAdd(&incoming->weak, 1);
    Control* old = control;
    if (old && _InterlockedExchangeAdd(&old->weak, -1) - 1 == 0)
        old->destroy();
    control = incoming;
    return *this;
}

Shared __cdecl makeShared(Part*);

struct Joint {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void setPart(int, void*) = 0;
};

struct S {
    char padding[0x140];
    Weak parts[2];
    Joint* joint;
    void f(int, Part*);
};

void S::f(int index, Part* part)
{
    Weak& target = parts[index];
    if (target.lock().ptr != part) {
        target = makeShared(part);
        joint->setPart(index, part ? part->padding + 0x228 : 0);
    }
}
