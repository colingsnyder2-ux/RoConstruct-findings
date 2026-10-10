// from server: 38% by colin
struct CXTPDockingPaneTabbedContainer {
    char pad0[0x20];
    int field_0x20;
    char pad1[0x34];
    int field_0x54;
    char pad2[0x08];
    int field_0x60;
    int field_0x64;
    char pad3[0x28];
    int field_0x8c;
    char pad4[0x110];
    int field_0x19c;
    char pad5[0x1c];
    int field_0x1bc;
    void func_006e2bd0(int, int);
};

extern "C" int __stdcall sub_006e4770(int, int);
extern "C" int __stdcall sub_006e0540(int, int);
extern "C" int __stdcall sub_0066ed20(int);
extern "C" int __stdcall sub_0073853e(int, int);

void CXTPDockingPaneTabbedContainer::func_006e2bd0(int a2, int a3)
{
    if (field_0x60 == 0)
        return;

    if (field_0x20 == 0 && *(int*)(field_0x60 + 0x80) == 0) {
        int* p = (int*)field_0x54;
        int (*fn)(int, int, int, int, int) = (int (*)(int, int, int, int, int))p[6];
        int r = fn(field_0x54, 0, 0, 0, 0);
        int (*fn2)(int, int, int, int, int) = (int (*)(int, int, int, int, int))(*(int**)this)[0x5c / 4];
        fn2((int)this, 0x7cb3c0, 0x785954, 0x56000000, r);
        sub_0073853e(field_0x1bc, (int)this);
    }

    int v;
    if (a2 != 0)
        v = a2 + 0x20;
    else
        v = 0;
    sub_006e4770((int)(this + 0x8c), v);

    int* q = (int*)(a2 + 0x20);
    int (*fn3)(int, int) = (int (*)(int, int))q[0x30 / 4];
    fn3(a2 + 0x20, (int)(this + 0x54));

    int* r = (int*)(this + 0x54);
    int (*fn4)(int) = (int (*)(int))r[0x18 / 4];
    int x = fn4((int)(this + 0x54));

    int (*fn5)(int, int) = (int (*)(int, int))q[0x2c / 4];
    fn5(a2 + 0x20, x);

    field_0x19c = 1;
    int y = sub_006e0540((int)(this + 0x54), 1);
    sub_0066ed20(y);

    int (*fn6)(int, int, int, int) = (int (*)(int, int, int, int))(*(int**)this)[0x13c / 4];
    fn6((int)this, a2, a3, 1);

    if (field_0x64 != 0) {
        int (*fn7)(int, int) = (int (*)(int, int))(*(int**)field_0x64)[0x34 / 4];
        fn7(field_0x64, (int)(this + 0x54));
    }
}
