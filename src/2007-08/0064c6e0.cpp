// from server: 46% by colin
struct CXTPImageManagerIcon {
    char pad0[0x20];
    int m_nField20;
    char pad1[0x30];
    int m_nField54;
    int m_nField58;
    int m_nField5c;
    int m_nField60;
    int m_nField64;
    void sub_64ac70(int);
    void sub_64acb0();
    void sub_439070(int, int);
    void sub_73833a();
    void sub_738334();
    CXTPImageManagerIcon* Init();
};

extern "C" void __cdecl sub_73833a();
extern "C" void __cdecl sub_738334();
extern "C" void __cdecl sub_64ac70();
extern "C" void __cdecl sub_64acb0();
extern "C" void __cdecl sub_439070();
extern "C" void* __stdcall LoadLibraryA(const char*);
extern "C" void* __stdcall GetProcAddress(void*, const char*);

CXTPImageManagerIcon* CXTPImageManagerIcon::Init()
{
    sub_73833a();
    m_nField20 = -1;
    m_nField54 = 0x10aaa;
    sub_64ac70(0xa);
    sub_64acb0();
    sub_439070(0x7f, 0);
    void* hLib = LoadLibraryA("msimg32.dll");
    m_nField58 = (int)hLib;
    m_nField5c = 0;
    m_nField60 = 0;
    if (hLib != 0) {
        m_nField5c = (int)GetProcAddress(hLib, "AlphaBlend");
        m_nField60 = (int)GetProcAddress((void*)m_nField58, "TransparentBlt");
    }
    sub_738334();
    m_nField64 = 2;
    return this;
}
