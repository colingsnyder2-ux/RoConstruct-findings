// from server: 94% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct Holder {
    void* vptr;
    void* field4;
    void* field8;
};

struct Base {
    Holder* clone();
};

Holder* Base::clone()
{
    Holder* p = (Holder*)operator_new(0xc);
    if (p != 0)
    {
        p->vptr = (void*)0x821b90;
        p->field4 = *(void**)((char*)this + 4);
        void* c = *(void**)((char*)this + 8);
        p->field8 = c;
        if (c != 0)
            _InterlockedExchangeAdd((volatile long*)((char*)c + 4), 1);
    }
    else
    {
        p = 0;
    }
    return p;
}
