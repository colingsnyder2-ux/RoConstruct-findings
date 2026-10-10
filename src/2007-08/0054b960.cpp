// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct UString_sink
{
    void (__stdcall *vptr)(void);
    char pad1[4];
    void* field_8;
    char pad2[0x18];
    void* field_24;
    void dtor();
};

void UString_sink::dtor()
{
    void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))0x77e6ac;
    fn((char*)this + 0x24);
    fn((char*)this + 8);
    void* p = *(void**)((char*)this + 4);
    if (p)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
        {
            (*(void (__stdcall **)(void*))p)(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                (*(void (__stdcall **)(void*))((*(void***)p)[2]))(p);
            }
        }
    }
}
