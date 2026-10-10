// from server: 82% by colin
struct CXTPPropertyGrid {
    char pad0[0x13c];
    void* m_pSomething;
    void SetControl(void* p);
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_683e20(void);

void CXTPPropertyGrid::SetControl(void* p)
{
    void* old = m_pSomething;
    void* inner = *(void**)((char*)old + 0x34);
    *(void**)((char*)old + 0x34) = 0;
    if (m_pSomething) {
        void** vt = *(void***)m_pSomething;
        ((void (__stdcall*)(int))vt[0])(1);
    }
    m_pSomething = p;
    void* q = *(void**)((char*)p + 0x34);
    if (q) {
        sub_6301e4(q);
        *(void**)((char*)m_pSomething + 0x34) = 0;
    }
    *(void**)((char*)m_pSomething + 0x34) = inner;
    void** vt2 = *(void***)m_pSomething;
    ((void (__stdcall*)(void))vt2[13])();
    sub_683e20();
}
