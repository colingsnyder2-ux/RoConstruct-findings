// from server: 35% by colin
struct CSelectionTreeCtrl {
    void sub_420F60(int a, int b, int c);
};

extern "C" void __stdcall sub_63023E();
extern "C" int __stdcall sub_6304B4(int, int, int);
extern "C" int __stdcall sub_6304AE(int);
extern "C" void __stdcall sub_420F30(int, int);
extern "C" void __stdcall sub_4A6C60(int, int);
extern "C" void __stdcall sub_40D550();
extern "C" void __stdcall sub_492360();
extern "C" int __stdcall sub_62FF02(int);
extern "C" void __stdcall sub_448EA0();
extern "C" void __stdcall sub_5595A0();

void CSelectionTreeCtrl::sub_420F60(int a, int b, int c) {
    sub_63023E();
    if ((c & 0xc) != 0) return;
    int r = sub_6304B4(a, b, (int)&c);
    if (r == 0) return;
    if ((c & 0x46) == 0) return;
    int r2 = sub_6304AE(r);
    if (r2 == 0) return;
    int local8 = 0;
    sub_420F30(r2 + 0xc, (int)&local8);
    if (local8 == 0) {
        sub_492360();
        return;
    }
    int local10 = 0;
    int local18 = 0;
    int local20 = 0;
    int local2c = 0;
    void* vt = *(void**)this;
    void (__stdcall *fn)(int*, int) = *(void (__stdcall**)(int*, int))((char*)vt + 0x14c);
    fn(&local10, (int)this);
    sub_4A6C60((int)&local10, (int)&local10);
    sub_40D550();
    sub_492360();
    sub_4A6C60((int)&local10, (int)&local10);
    int r3 = sub_62FF02(0);
    int r4 = *(int*)(r3 + 4);
    sub_448EA0();
    sub_5595A0();
    sub_492360();
}
