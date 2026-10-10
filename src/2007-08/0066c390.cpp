// from server: 74% by colin
struct CXTPToolBar_CControlButtonExpand {
    void sub_66BFD0(int);
    void func(int);
};

extern "C" void __stdcall sub_685720(int, int, int, int);

void CXTPToolBar_CControlButtonExpand::func(int a) {
    sub_66BFD0(a);
    if (*(int*)(a + 0x24) == 0) {
        int v = *(int*)((char*)this + 0x16c);
        if (v != 0) {
            int t = *(int*)(v + 0xd4);
            sub_685720(a, 0x7cafe4, (int)&t, 0);
        } else {
            int t = 0;
            sub_685720(a, 0x7cafe4, (int)&t, 0);
        }
    } else {
        sub_685720(a, 0x7cafe4, (int)((char*)this + 0x170), 0);
    }
    unsigned int v = *(unsigned int*)(a + 0x28);
    if (v > 4 && v < 0x12) {
        sub_685720(a, 0x7cae18, (int)((char*)this + 0x144), 0);
    }
}
