// from server: 94% by atomic.potato
struct CXTPRibbonTabPopupToolBar {
    char pad0[4];
    int m_nOffset;
    char pad8[0x14 - 8];
    void* m_pSomething;
    void f(int n);
};

extern "C" void __stdcall sub_645a70(int, int);

void CXTPRibbonTabPopupToolBar::f(int n)
{
    int* p = (int*)m_pSomething;
    int* q = (int*)p[0x84 / 4];
    int v = q[0x38 / 4];
    char* base = (char*)this - 0x248;
    sub_645a70(0, -1);
    if (n != 0) {
        v -= 0x28;
        if (v < 0)
            v = 0;
    } else {
        v += 0x28;
    }
    if (v != m_nOffset) {
        int* vt = *(int**)base;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x17c / 4];
        m_nOffset = v;
        fn(base);
    }
}
