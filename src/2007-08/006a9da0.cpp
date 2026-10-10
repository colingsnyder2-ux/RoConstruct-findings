// from server: 51% by colin
struct CXTPRibbonBar {
    char pad[0x20];
    void* field20;
    char pad2[0x1d8 - 0x24];
    char field1d8[0x264 - 0x1d8];
    void* field264;
    char pad3[0x280 - 0x268];
    void* field280;
    int sub_6a7d80(int, int, int);
    void* sub_646570();
    void* sub_643980();
    void sub_6507a0(int, int, int);
    int sub_6a9da0(int, int, int);
};

struct CXTPSomething {
    void sub_6fd160();
};

extern "C" {
    int __stdcall sub_7163e0(void*, int, int);
    int __stdcall sub_6ff7c0(void*, void*, int, int, int);
    int __stdcall sub_738412(void*);
    int __stdcall sub_40cb90(void*, int, int, int);
    int __stdcall sub_633c70(void*);
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall GetMenuState(void*, int, int);
    void* __stdcall GetSystemMenu(void*, int);
    int __stdcall PostMessageA(void*, int, int, int);
    int __stdcall PtInRect(void*, int, int);
    int __stdcall UpdateWindow(void*);
}

int CXTPRibbonBar::sub_6a9da0(int a1, int a2, int a3)
{
    int v = sub_7163e0(field280, a1, a2);
    if (v != 0) {
        ((CXTPSomething*)v)->sub_6fd160();
        return 0;
    }

    int r = sub_6a7d80(a1, a2, a3);
    if (r != 0) {
        void* w = sub_646570();
        int pt[2];
        ClientToScreen(field20, pt);
        sub_633c70(sub_643980());
        UpdateWindow(field20);

        int flags = sub_738412(w);
        if ((flags & 0x1000000) != 0)
            return 0;

        if (r == 2) {
            int x = (unsigned short)pt[0];
            int y = (unsigned short)pt[1];
            PostMessageA(*(void**)((char*)w + 0x20), 0x112, 0xf012, (y << 16) | x);
            return 0;
        }

        if ((unsigned)(r - 10) > 7)
            return 0;

        flags = sub_738412(w);
        if ((flags & 0x80000) != 0) {
            void* hwnd = (w != 0) ? *(void**)((char*)w + 0x20) : 0;
            int state = GetMenuState(GetSystemMenu(hwnd, 0), 0xf000, 0);
            if ((state & 3) != 0)
                return 0;
        }

        int x = (unsigned short)pt[0];
        int y = (unsigned short)pt[1];
        sub_40cb90(w, 0x112, r + 0xeff7, (y << 16) | x);
        return 0;
    }

    if (PtInRect(field1d8, a1, a2) != 0) {
        sub_633c70(sub_643980());
    }
    if (sub_6ff7c0((char*)field264 + 0x178, field20, a1, a2, 0) != 0)
        return 0;
    sub_6507a0(a1, a2, a3);
    return 0;
}
