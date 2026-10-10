// from server: 41% by tester
struct CXTPAccessible {
    static unsigned int GetInstance();
};

struct CXTPModuleHandle {
    void* m_pData;
    void* m_pModule;
    void CXTPModuleHandle_ctor(const char*);
    void CXTPModuleHandle_dtor();
    unsigned int GetHandle();
};

extern "C" void __stdcall sub_6e8f80(void*);
extern "C" void __stdcall sub_6e81e0(void*);
extern "C" void __stdcall sub_6e8c80(void*);

unsigned int g_97e6b8 = 0;

unsigned int CXTPAccessible::GetInstance()
{
    if (g_97e6b8 == 0)
    {
        CXTPModuleHandle mh;
        mh.CXTPModuleHandle_ctor("COMCTL32.DLL");
        unsigned int h = mh.GetHandle();
        g_97e6b8 = h;
        if (g_97e6b8 == 0)
            g_97e6b8 = 0x40000;
        mh.CXTPModuleHandle_dtor();
    }
    return g_97e6b8;
}
