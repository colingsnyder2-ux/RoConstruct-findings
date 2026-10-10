// from server: 87% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SoundChannel
{
    void* construct(int a, int b, int c, const void* src, char flag);
};

void* SoundChannel::construct(int a, int b, int c, const void* src, char flag)
{
    *(int*)((char*)this + 0) = a;
    *(int*)((char*)this + 4) = b;
    *(int*)((char*)this + 8) = c;

    void* dst = (char*)this + 0xc;
    extern void __stdcall string_ctor(void*, const void*);
    string_ctor(dst, src);

    *(int*)((char*)dst + 0x1c) = *(int*)((char*)src + 0x1c);
    *(int*)((char*)dst + 0x20) = *(int*)((char*)src + 0x20);

    int* ref = *(int**)((char*)src + 0x24);
    *(int**)((char*)dst + 0x24) = ref;
    if (ref)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
    }

    *(char*)((char*)this + 0x34) = flag;
    *(char*)((char*)this + 0x35) = 0;

    return this;
}
