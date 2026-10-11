// from server: 30% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vtbl;
    volatile long ref1;
    volatile long ref2;
};

struct Outer {
    void* vtbl;
    void method(Inner* a, int b, int c, int d, int e, Inner* f);
};

void Outer::method(Inner* a, int b, int c, int d, int e, Inner* f)
{
    Inner* local = f;
    if (local)
        _InterlockedExchangeAdd(&local->ref1, 1);
    ((void (__thiscall*)(Outer*, Inner*, int, int, int, int, Inner*))0x5ac180)(this, a, b, c, d, e, local);
    if (local)
    {
        if (_InterlockedExchangeAdd(&local->ref1, -1) == 1)
        {
            ((void (__thiscall*)(Inner*))((void**)local->vtbl)[1])(local);
            if (_InterlockedExchangeAdd(&local->ref2, -1) == 1)
                ((void (__thiscall*)(Inner*))((void**)local->vtbl)[2])(local);
        }
    }
}
