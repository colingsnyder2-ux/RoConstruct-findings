// from server: 62% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CWebToolbox
{
    int unused0[9];
    void* value;
    void setValue(void* output);
};

void CWebToolbox::setValue(void* output)
{
    *(void**)output = value;
    *(void**)((char*)output + 4) = *(void**)((char*)this + 0x28);
    if (*(void**)((char*)this + 0x28) != 0)
        _InterlockedExchangeAdd((volatile long*)((char*)*(void**)((char*)this + 0x28) + 4), 1);
}
