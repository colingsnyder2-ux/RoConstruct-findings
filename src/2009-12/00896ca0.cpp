// from server: 43% by atomic.potato
struct CXTPRibbonBar {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0x240];
    int m_bFrameThemeEnabled;
    char pad2[0x4];
    void* m_pSelectedTab;
    char pad3[0x8];
    int m_bSomething278;
    char pad4[0x4];
    int m_bSomething280;
    char pad5[0x4];
    int m_bSomething288;

    int f(int, int, int);
    int IsFrameThemeEnabled();
    void* GetSelectedTab();
    int sub_895130(int, int);
    int sub_894cd0();
    int sub_8951e0();
    void* sub_807090();
    int sub_8ea620(int, int);
    int sub_8cf690(int, int, int);
    int sub_8115c0(int, int, int);
};

extern "C" {
    int __stdcall GetMenuState(void*, unsigned int, unsigned int);
    void* __stdcall GetSystemMenu(void*, int);
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

int CXTPRibbonBar::f(int a, int b, int c)
{
    int result;
    void* tab;
    void* menu;
    int state;
    int pt[2];
    unsigned int flags;

    result = sub_895130(a, b);
    if (result != 0) {
        if (result != 2)
            goto fallback;
        goto handle;
    }
    if (sub_894cd0() != 0) {
        if (sub_8ea620(a, b) != 0)
            goto handle;
    }
fallback:
    tab = (void*)sub_8cf690(*(int*)((char*)this + 0x268) + 0x184, a, b);
    if (tab == 0)
        goto end;
    if (tab != GetSelectedTab())
        goto end;
    if (*(int*)((char*)this + 0x260) == 0)
        goto end;
    if (sub_8951e0() != 0) {
        sub_8115c0(0, 0, 0);
        return 0;
    }
    if (*(int*)((char*)this + 0x278) != 0) {
        void* p = *(void**)((char*)this + 0x268);
        void* vtable = *(void**)((char*)p + 0x184);
        int (*fn)(void*, int) = *(int (**)(void*, int))((char*)vtable + 0x20);
        fn((char*)p + 0x184, 0);
        sub_8115c0(1, 0, 0);
        return 0;
    }
    *(int*)((char*)this + 0x278) = 1;
    goto end;

handle:
    {
        void* wnd = sub_807090();
        unsigned int style = *(unsigned int*)((char*)wnd + 0x20);
        int exstyle = 0;
        (void)exstyle;
        if ((style & 0x20000000) != 0 || (style & 0x1000000) != 0) {
            flags = 0xf120;
        } else if ((style & 0x10000) != 0) {
            flags = 0xf030;
            if ((style & 0x80000) != 0) {
                menu = GetSystemMenu(wnd, 0);
                if (GetMenuState(menu, 0xf030, 0) & 3)
                    goto skip;
            }
        } else {
            goto skip;
        }
        {
            void* hwnd = *(void**)((char*)this + 0x20);
            ClientToScreen(hwnd, pt);
            int x = (pt[1] << 16) | (pt[0] & 0xffff);
            SendMessageA(*(void**)((char*)wnd + 0x20), 0x112, flags | 2, x);
        }
    }
skip:
    return 0;

end:
    sub_8115c0(a, b, c);
    return 0;
}
