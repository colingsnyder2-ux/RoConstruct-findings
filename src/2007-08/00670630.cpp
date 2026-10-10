// from server: 93% by colin
struct CXTPToolBar_CControlButtonExpand {
    char pad_0x0[0x9c];
    int field_0x9c;
    char pad_0xa0[0xc8 - 0xa0];
    int field_0xc8;
    char pad_0xcc[0xf8 - 0xcc];
    int field_0xf8;
    int field_0xfc;
    char pad_0x100[0x158 - 0x100];
    int field_0x158;
    char pad_0x15c[0x16c - 0x15c];
    int field_0x16c;

    void method_6ca4f0(int, int);
    int method_63a580();
    void* method_63a000();
    int method_44bb40();
    void method_670630(int, int);
};

void CXTPToolBar_CControlButtonExpand::method_670630(int arg1, int arg2) {
    if (field_0x16c == 0) {
        method_6ca4f0(arg1, arg2);
        return;
    }
    int eax = field_0x9c;
    if (eax == -1) {
        int ecx = field_0x158;
        if (ecx != 0) {
            eax = method_63a580();
        }
    }
    if (eax != 0) {
        if (field_0xf8 == 4) {
            int edx = field_0xfc;
            if (*(int*)(edx + 0xf4) == 2) {
                void* p = method_63a000();
                int v = *(int*)((char*)p + 0xc8);
                v += arg1;
                if (field_0xc8 > v) {
                    if (method_44bb40() != 4) {
                        void** vtbl = *(void***)this;
                        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0x98 / 4];
                        fn(this);
                    }
                }
            }
        }
    }
}
