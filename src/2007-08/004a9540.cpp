// from server: 65% by colin
struct FactoryProduct {
    char pad0[8];
    int field8;
    char padC[4];
    char field10;
    char pad11[3];
    int field14;
    char pad18[0x114];
    char field12C;
    bool method(int arg);
};

extern "C" void __stdcall sub_49F950(int*);
extern "C" void __stdcall sub_4A05C0(int*, int);
extern "C" int __stdcall sub_4B7F70();
extern "C" void __stdcall sub_4A0590(int*, int);
extern "C" void __stdcall sub_4A94C0(int*, int);
extern "C" void __stdcall sub_4A0DF0(int*, int);

bool FactoryProduct::method(int arg) {
    if (field10 == 0) {
        int* p = &field14;
        sub_49F950(p);
        sub_4A05C0(p, 0x18);
        int v = sub_4B7F70();
        sub_4A0590(p, v);
        sub_4A05C0(p, 0x4b);
        field10 = 1;
        field12C = 1;
    }
    int* p = &field14;
    sub_4A94C0(p, arg);
    sub_4A0DF0((int*)((char*)field8 + 0xec), 0);
    int v = (field14 + 7) >> 3;
    return v < 0x554;
}
