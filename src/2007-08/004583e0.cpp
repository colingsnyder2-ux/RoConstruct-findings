// from server: 97% by colin
struct CRobloxWnd {
    char pad[0x68];
    int field_68;
    char pad2[0x94 - 0x6c];
    void* field_94;
    char pad3[0xa4 - 0x98];
    int field_a4;
    void func();
};

extern void* g_8bd0d8;

void CRobloxWnd::func() {
    void* p = field_94;
    if (g_8bd0d8 != p) {
        (*(void (__thiscall**)(void*))((*(int*)p) + 0x98))(p);
        g_8bd0d8 = p;
    }
    extern void __stdcall sub_557920(int, int);
    sub_557920(field_68, field_a4);
}
