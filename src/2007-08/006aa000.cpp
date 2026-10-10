// from server: 57% by colin
struct CXTPRibbonBar
{
    char pad[0x20];
    unsigned int m_hWnd;
    int sub_6A7D80(int, int);
    int sub_643980();
    int sub_633C70();
    int sub_646570();
    int sub_646C00(int, int, int);
};

extern "C" int __stdcall ClientToScreen(unsigned int, void*);
extern "C" int __stdcall SendMessageA(unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" int __stdcall UpdateWindow(unsigned int);

int CXTPRibbonBar::sub_6A7D80(int a, int b)
{
    int result = sub_6A7D80(a, b);
    if (result == 2)
    {
        sub_643980();
        sub_633C70();
        UpdateWindow(m_hWnd);
        int p = sub_646570();
        unsigned short pt[2];
        ClientToScreen(m_hWnd, pt);
        int x = 0;
        if (p != 0)
            x = *(int*)(p + 0x20);
        unsigned int packed = ((unsigned int)pt[1] << 16) | pt[0];
        SendMessageA(*(unsigned int*)(p + 0x20), 0x313, x, packed);
    }
    else
    {
        sub_646C00(a, b, 0);
    }
    return 0;
}
