// from server: 50% by colin
struct CXTPControlComboBoxPopupBar {
    int f(int, int, int, int, int);
};

extern "C" int __stdcall sub_644720(int, int);

int CXTPControlComboBoxPopupBar::f(int a, int b, int c, int d, int e) {
    if (*(int*)((char*)this + 0x88) == 0)
        return 0;

    if (b == 0x100) {
        int v1 = *(int*)((char*)this - 0x54);
        int v2 = *(int*)(v1 + 0x1b8);
        int p1 = *(int*)c;
        int p2 = *(int*)d;
        return ((int (__thiscall*)(void*, int, int))v2)((char*)this - 0x54, p1, p2);
    }

    if (b != 0x20a)
        return 0;

    int r = sub_644720(*(int*)((char*)this + 0x74), (int)((char*)this - 0x54));
    if (r != 0) {
        int vt = *(int*)r;
        int (*fn)(void*) = *(int (**)(void*))((char*)vt + 0x74);
        if (fn((void*)r) != 0) {
            unsigned short x1 = *(unsigned short*)d;
            unsigned short y1 = *(unsigned short*)(d + 2);
            unsigned short x2 = *(unsigned short*)e;
            unsigned short y2 = *(unsigned short*)(e + 2);
            int vt2 = *(int*)r;
            int (*fn2)(void*, int, int, int, int) = *(int (**)(void*, int, int, int, int))((char*)vt2 + 0xd8);
            fn2((void*)r, x1, y1, x2, y2);
        }
    }
    return 1;
}
