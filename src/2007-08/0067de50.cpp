// from server: 32% by colin
struct CXTPControlWindowList {
    void* CreateControl();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);

void __stdcall sub_67D830(void*);

void* CXTPControlWindowList::CreateControl() {
    void* p = sub_62FEF6(0x168);
    if (p != 0) {
        sub_67D830(p);
    } else {
        p = 0;
    }
    return p;
}
