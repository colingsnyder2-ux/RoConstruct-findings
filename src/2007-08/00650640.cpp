// from server: 71% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall GetForegroundWindow();
    __declspec(dllimport) void* __stdcall GetLastActivePopup(void*);
    __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

extern "C" void* __cdecl sub_006301C0(void*);
extern "C" int __cdecl sub_0063023E();
extern "C" int __cdecl sub_00738412();
extern "C" void* __cdecl sub_00738490();

struct CXTPToolBar {
    char pad0[0x20];
    void* m_hWnd;
    int f(unsigned int);
};

int CXTPToolBar::f(unsigned int arg)
{
    if (sub_0063023E() == 0)
        return 0;
    if ((sub_00738412() & 0x100) == 0)
        return 1;
    void* p = sub_00738490();
    void* fg = GetForegroundWindow();
    void* fg2 = sub_006301C0(fg);
    int match;
    if (p == fg2) {
        match = 1;
    } else {
        void* popup = GetLastActivePopup(*(void**)((char*)p + 0x20));
        void* popup2 = sub_006301C0(popup);
        if (popup2 == fg2) {
            if (SendMessageA(*(void**)((char*)fg2 + 0x20), 0x36d, 0x40, 0) != 0)
                match = 1;
            else
                match = 0;
        } else {
            match = 0;
        }
    }
    unsigned int v = (match == 0) ? 4 : 8;
    SendMessageA(m_hWnd, 0x36d, v, 0);
    return 1;
}
