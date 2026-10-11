// from server: 33% by atomic.potato
struct CXTPTabClientWnd {
    char pad0[0x58];
    struct CNavigateButtonActiveFiles {
        char pad0[0x98];
        int f();
    } nav;
    int sub_7f4148();
    CXTPTabClientWnd();
};

int CXTPTabClientWnd::sub_7f4148() { return 0; }

CXTPTabClientWnd::CXTPTabClientWnd() {
    sub_7f4148();
    nav.f();
    *(int*)this = 0x9fc814;
    *(int*)((char*)this + 0x58) = 0x9fc784;
}
