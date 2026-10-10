// from server: 41% by colin
struct CXTPToolTipContext_COffice2007ToolTip {
    char pad[0x130];
    int field130;
    void construct(int);
};

extern "C" void __stdcall sub_694ee0(int);
extern "C" void __stdcall sub_70f2c0(int);

void CXTPToolTipContext_COffice2007ToolTip::construct(int arg) {
    sub_694ee0(arg);
    *(int*)this = 0x7d1464;
    sub_70f2c0((int)((char*)this + 0x130));
}
