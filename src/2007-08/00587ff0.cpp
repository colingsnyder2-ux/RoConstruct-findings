// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_77e6ac();

struct SoundChannel
{
    void sub_00587ff0();
};

void SoundChannel::sub_00587ff0()
{
    int* p = *(int**)((char*)this + 0x24);
    if (p)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
        {
            (*(void(__thiscall**)(int*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                (*(void(__thiscall**)(int*))(*(int*)p + 8))(p);
            }
        }
    }
    sub_77e6ac();
}
