// from server: 18% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CGdiObject {
    char pad0[0xf0];
    void* m_ptr;
    void Destroy();
};

void CGdiObject::Destroy()
{
    void* p = m_ptr;
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void (__stdcall**)(void*))p)(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vtbl = *(void***)p;
                (*(void (__stdcall**)(void*))vtbl[2])(p);
            }
        }
    }
    m_ptr = 0;
}
