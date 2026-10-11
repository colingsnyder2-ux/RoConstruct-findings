// from server: 46% by colin
struct CXTPDockingPaneBase {
    void* m_pUnknown;
    char m_list[0x1c];
    void* m_pWnd;

    CXTPDockingPaneBase();
    void sub_76d0b0(int);
};

extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __stdcall GetProcAddress(void*, const char*);

CXTPDockingPaneBase::CXTPDockingPaneBase()
{
    sub_76d0b0(0xa);
    *(void**)((char*)this + 4) = (void*)0x86747c;
    m_pUnknown = 0;
    void* h = GetModuleHandleA((const char*)0x8519b8);
    if (h != 0) {
        void* p = GetProcAddress(h, (const char*)0x867490);
        m_pUnknown = p;
    }
    m_pWnd = (void*)0x76ccf0;
}
