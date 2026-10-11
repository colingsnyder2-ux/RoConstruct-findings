// from server: 71% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Holder {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct Target {
    int field0;
    void assign(Holder* other);
    void* func(Holder* a, int b, int c, int d, Holder* e);
};

void* Target::func(Holder* a, int b, int c, int d, Holder* e)
{
    this->field0 = 0;
    this->assign(a);
    if (e) {
        if (_InterlockedExchangeAdd(&e->refCount1, -1) == 1) {
            e->unknown0();
            if (_InterlockedExchangeAdd(&e->refCount2, -1) == 1) {
                e->unknown1();
            }
        }
    }

    return this;
}
