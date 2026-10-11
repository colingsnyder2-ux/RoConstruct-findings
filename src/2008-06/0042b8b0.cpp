// from server: 45% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool func_0060a2f0();

struct Holder {
    void* vptr;
    int refcount;
};

struct Callback {
    void* vptr;
    Holder* holder;
};

struct Target {
    void* vptr;
    Callback cb;
    void assign(Callback* other);
};

void Target::assign(Callback* other)
{
    if (func_0060a2f0()) {
        this->vptr = 0;
        return;
    }
    Callback* dst = &this->cb;
    if (dst) {
        dst->vptr = other->vptr;
        dst->holder = other->holder;
        Holder* h = other->holder;
        if (h) {
            _InterlockedExchangeAdd((volatile long*)&h->refcount, 1);
        }
    }
    this->vptr = (void*)0x810620;
}
