// from server: 45% by colin
struct CXTPControlPopupColor {
    char pad[0x1fc];
    void sub_670500();
    void sub_738334();
    CXTPControlPopupColor* construct();
};

CXTPControlPopupColor* CXTPControlPopupColor::construct() {
    sub_670500();
    *(int*)((char*)this + 0x00) = 0x7cb8e4;
    *(int*)((char*)this + 0x20) = 0x7cb884;
    *(int*)((char*)this + 0xf8) = 4;
    *(int*)((char*)this + 0x178) = -1;
    sub_738334();
    return this;
}
