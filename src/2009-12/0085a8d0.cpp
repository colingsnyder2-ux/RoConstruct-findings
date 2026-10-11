// from server: 56% by atomic.potato
struct CXTPStatusBar {
    char pad[0xbc];
    void* m_pSomething;
    void OnNcHitTest(int, int, int);
};

extern "C" void __stdcall sub_926b02();

void CXTPStatusBar::OnNcHitTest(int a, int b, int c)
{
    sub_926b02();
    if (m_pSomething != 0) {
        void** vt = *(void***)m_pSomething;
        void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))vt[0x64/4];
        fn(b, c);
    }
}
