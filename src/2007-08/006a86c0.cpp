// from server: 76% by colin
struct CXTPRibbonBarControlQuickAccessPopup
{
    char pad[0x1ec];
    int field_1ec;
    int field_1f0;
    int field_1f4;
    int field_1f8;
    char pad2[0x248 - 0x1fc];
    int field_248;
    void sub_67a2d0();
    CXTPRibbonBarControlQuickAccessPopup* init(int arg);
};

CXTPRibbonBarControlQuickAccessPopup* CXTPRibbonBarControlQuickAccessPopup::init(int arg)
{
    sub_67a2d0();
    field_1ec = 3;
    field_1f0 = 3;
    field_1f4 = 3;
    field_1f8 = 3;
    field_248 = arg;
    *(int*)this = 0x7d4f64;
    *(int*)((char*)this + 0x54) = 0x7d4f54;
    *(int*)((char*)this + 0x5c) = 0x7d4ef4;
    return this;
}
