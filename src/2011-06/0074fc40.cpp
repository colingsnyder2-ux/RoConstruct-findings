// from server: 20% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_0074fc40 {
    void* m_p0;
    void* m_p4;
    void f(void* a, void* b);
};

void S_func_0074fc40::f(void* a, void* b)
{
    void* p = *(void**)a;
    void* r = ((void* (__cdecl*)(void*, void*, void*, void*, void*))0x80b2ea)(0, p, (void*)0xc071f8, (void*)0xc48984, 0);
    m_p0 = r;
    void* q = *(void**)((char*)a + 4);
    m_p4 = q;
    if (q != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    if (m_p0 == 0) {
        void* tmp = 0;
        ((void (__cdecl*)(void*))0x402560)(&tmp);
    }
}
