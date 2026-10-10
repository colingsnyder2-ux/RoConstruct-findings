// from server: 54% by colin
struct Sub1 {
    char pad[0x38];
    int f1(int, int);
    int f2(int);
};

struct CXTPDockingPaneAutoHidePanel {
    char pad0[0x10];
    int field10;
    char pad1[0x24];
    int field38;
    char pad2[0x08];
    int field44;
    char pad3[0x08];
    int fieldCC;
    char pad4[0x20];
    int fieldAC;
    void method(int);
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

int Sub1::f1(int, int) { return 0; }
int Sub1::f2(int) { return 0; }

void CXTPDockingPaneAutoHidePanel::method(int param) {
    int v;
    v = ((Sub1*)((char*)this + 0x38))->f1(0, param);
    v = ((Sub1*)((char*)this + 0x38))->f2(v);
    if (fieldCC != 0) {
        InvalidateRect((void*)fieldCC, 0, 0);
    }
    int t = (this != (CXTPDockingPaneAutoHidePanel*)((char*)this + 0x54)) ? (int)this : 0;
    int r = ((int (__thiscall*)(CXTPDockingPaneAutoHidePanel*, int, int))0x6e0540)(this, t, 1);
    ((void (__thiscall*)(int))0x66ed20)(r);
    if (field44 == 0 && fieldCC != 0) {
        int* s = (int*)((char*)this - 0x54);
        ((void (__thiscall*)(int*, int, int, int))s[0x68/4])(s, 0, 0, 0);
    }
    field10 = 0;
}
