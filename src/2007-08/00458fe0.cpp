// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxWnd {
    void* field0;
    void sub_458690(void* a, void* b);
    CRobloxWnd* assign(void* a, void* b);
};

CRobloxWnd* CRobloxWnd::assign(void* a, void* b)
{
    field0 = a;
    sub_458690(a, b);
    if (a != 0) {
        char* p = (char*)a + 0xa4;
        if (p != 0) {
            *(void**)p = a;
            void* old = *(void**)((char*)this + 4);
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* old2 = *(void**)(p + 4);
            if (old2 != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                    void** vt = *(void***)old2;
                    void (*fn)(void) = (void (*)(void))vt[2];
                    fn();
                }
            }
            *(void**)(p + 4) = old;
        }
    }
    return this;
}
