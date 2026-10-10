// from server: 71% by colin
struct CXTPStatusBar {
    char pad0[0x20];
    void* m_hwnd;
    char pad24[0x4];
    unsigned int m_dwStyle;
    char pad2c[0x4];
    unsigned int m_dwStyle2;
    char pad34[0x24];
    unsigned int m_dwStyle3;
    int Method1(void*);
    int Method2();
    int Method3(void*, int, int, int);
};

extern "C" {
    int __stdcall G1_func_00692c60(void*);
    int __stdcall G1_func_006921f0(void*);
    void* __stdcall G1_func_0077dd98(void*);
    int __stdcall G1_func_0077dcb8(void*, void*);
    int __stdcall G1_func_0077d434(void*, void*);
    int __stdcall G1_func_0077ecdc(void*, int, int, int);
}

int CXTPStatusBar::Method3(void* p1, int p2, int p3, int p4)
{
    int* p = (int*)G1_func_00692c60(p1);
    if (!p)
        return 0;
    if (!(p[0xb] & 1)) {
        void* h = G1_func_0077dd98((char*)p + 0x30);
        if (!G1_func_0077dcb8(p1, h))
            return 1;
    }
    G1_func_0077d434((char*)p + 0x30, p1);
    if (!G1_func_006921f0(p))
        return 0;
    if (p4 == 0) {
        p[0xb] |= 1;
        return 1;
    }
    p[0xb] &= ~1;
    void* h;
    if (p[0xa] & 0x4000000)
        h = 0;
    else
        h = G1_func_0077dd98((char*)p + 0x30);
    int v = (unsigned short)p[0xa] | p[0x16];
    (*(int (__thiscall**)(void*, int, int, void*))(*(int*)this + 0x118))(this, 0x401, v, h);
    G1_func_0077ecdc(m_hwnd, 0, 0, 0);
    return 1;
}
