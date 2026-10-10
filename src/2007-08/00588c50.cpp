// from server: 80% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_0062FC0E(void*, int);

struct SoundChannel
{
    char pad[0xec];
    void* field_ec;
    void* field_f0;
    void* field_f4;
    void sub_00588c50();
};

void SoundChannel::sub_00588c50()
{
    if (field_f4)
    {
        sub_0062FC0E(field_f4, 0);
        field_f4 = 0;
    }

    if (field_ec)
    {
        *(int*)((char*)field_ec + 8) -= 1;
        field_ec = 0;

        void* p = field_f0;
        field_f0 = 0;
        if (p)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
            {
                void** vt = *(void***)p;
                void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[1];
                fn(p);

                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
                {
                    void** vt2 = *(void***)p;
                    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vt2[2];
                    fn2(p);
                }
            }
        }
    }
}
