// from server: 94% by colin
struct CXTPRibbonBar {
    void sub_650960(int);
    int sub_6a7a40();
    void func(int);
};

struct CXTPRibbonBarInner {
    void sub_716a70();
};

void CXTPRibbonBar::func(int arg) {
    int saved = (*(int (__thiscall **)(CXTPRibbonBar *))(*(int *)this + 0x160))(this);
    sub_650960(arg);
    if (sub_6a7a40() != 0) {
        int cur = (*(int (__thiscall **)(CXTPRibbonBar *))(*(int *)this + 0x160))(this);
        if (saved != cur) {
            ((CXTPRibbonBarInner *)(*(int *)((char *)this + 0x27c)))->sub_716a70();
        }
    }
}
