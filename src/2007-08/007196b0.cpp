// from server: 18% by colin
struct CXTPRibbonGroupPopupToolBar {
    void* sub_00719030();
};

extern "C" void* __cdecl sub_0062FEF6(unsigned int size);

void* __cdecl sub_007196B0()
{
    void* p = sub_0062FEF6(0x17c);
    if (p != 0) {
        return ((CXTPRibbonGroupPopupToolBar*)p)->sub_00719030();
    }
    return 0;
}
