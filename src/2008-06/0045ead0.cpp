// from server: 77% by colin
// roc 2008-06 0045ead0  unit: CRobloxWnd  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ead0

struct CRobloxWnd {
    char pad0[0x70];
    void* field70;
    char pad74[0x30];
    void* fieldA4;
    char padA8[0x0c];
    int fieldB4;
    void sub_45EAD0();
};

extern "C" void __stdcall sub_41EEA0(void*);
extern "C" void __stdcall sub_5756E0(void*, int);

extern void* g_96EFF4;
extern void* g_974D74;

void CRobloxWnd::sub_45EAD0() {
    void* p = fieldA4;
    if (g_96EFF4 != p) {
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0x98 / 4];
        fn(p);
        g_96EFF4 = p;
    }
    void* r;
    if (field70 != 0) {
        sub_41EEA0(field70);
        r = field70;
    } else {
        r = 0;
    }
    g_974D74 = r;
    sub_5756E0(field70, fieldB4);
    g_974D74 = 0;
}
