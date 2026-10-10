// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VPlayerListener {
    char pad[0x1c];
    void* field_0x1c;
    void* field_0x20;
    VPlayerListener* construct(void* a, void* b);
};

extern "C" void __stdcall sub_0077e69c(void*);
extern "C" void __stdcall sub_0077e6ac(void*);

VPlayerListener* VPlayerListener::construct(void* a, void* b)
{
    void* local;
    sub_0077e69c(&local);
    field_0x1c = a;
    field_0x20 = b;
    if (b != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    sub_0077e6ac(&local);
    if (b != 0)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1)
        {
            (*(void (__thiscall**)(void*))(*(char**)b + 4))(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1)
            {
                (*(void (__thiscall**)(void*))(*(char**)b + 8))(b);
            }
        }
    }
    return this;
}
