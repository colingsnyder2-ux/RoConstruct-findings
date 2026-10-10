// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long ref1;
    volatile long ref2;
    void Release();
};

void RefCounted::Release()
{
    if (_InterlockedExchangeAdd(&ref1, -1) == 1) {
        (*(void (__thiscall**)(RefCounted*))((char*)vfptr + 4))(this);
        if (_InterlockedExchangeAdd(&ref2, -1) == 1) {
            (*(void (__thiscall**)(RefCounted*))((char*)vfptr + 8))(this);
        }
    }
}
