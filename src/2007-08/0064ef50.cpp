// from server: 81% by colin
struct CXTPToolBar {
    int OnCommand(int nID, int nCode, int nMsg);
    char pad[0x184];
    void* m_pCommandBars;
};

extern "C" void __cdecl sub_73848A();
extern "C" void __stdcall sub_63002E(int, int, int, int, int, int);
extern "C" void __stdcall sub_633C70();
extern "C" void __stdcall sub_647A10(int, int, int);

int CXTPToolBar::OnCommand(int nID, int nCode, int nMsg)
{
    if (*(void**)((char*)this + 0x184) != 0)
    {
        if ((unsigned)(nID - 10) <= 7)
        {
            sub_73848A();
            sub_63002E(*(int*)0x77e08c, 0, 0, 0, 0, 0x13);
            sub_633C70();
            void* p = *(void**)((char*)this + 0x184);
            void** vtbl = *(void***)p;
            typedef void (__stdcall *Fn)(void*, int, int, int);
            Fn fn = (Fn)vtbl[2];
            fn(p, nID, nCode, nMsg);
            return 1;
        }
        sub_647A10(nID, nCode, nMsg);
    }
    return 0;
}
