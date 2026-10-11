// from server: 87% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct VInstanceHolder
{
    void* vptr;
    void* field4;
    void* field8;
};

struct VInstance
{
    VInstanceHolder* makeHolder();
};

VInstanceHolder* VInstance::makeHolder()
{
    VInstanceHolder* p = (VInstanceHolder*)operator_new(0xc);
    if (p != 0)
    {
        p->vptr = (void*)0x821718;
        p->field4 = *(void**)((char*)this + 4);
        void* c = *(void**)((char*)this + 8);
        p->field8 = c;
        if (c != 0)
            _InterlockedExchangeAdd((volatile long*)((char*)c + 4), 1);
    }
    return p;
}
