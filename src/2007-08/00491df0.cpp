// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_func_0077e6ac();

struct VPlayerListener {
    char pad[0x20];
    void* m_ref;
    void destroy();
};

void VPlayerListener::destroy()
{
    void* p = m_ref;
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vtbl = *(void***)p;
            ((void (__thiscall*)(void*))vtbl[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                ((void (__thiscall*)(void*))vtbl[2])(p);
            }
        }
    }
    G1_func_0077e6ac();
}
