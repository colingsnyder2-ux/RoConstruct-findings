// from server: 8% by colin
struct CXTPImageManagerIcon {
    char pad[0x3c];
    int field_3c;
    int field_40;
    CXTPImageManagerIcon(int, int);
    void sub_64ac30(int);
    void sub_738334();
    void sub_73833a();
};

void CXTPImageManagerIcon::sub_73833a() {}

void CXTPImageManagerIcon::sub_738334() {}

void CXTPImageManagerIcon::sub_64ac30(int) {}

CXTPImageManagerIcon::CXTPImageManagerIcon(int a, int b) {
    sub_73833a();
    sub_64ac30(10);
    field_3c = a;
    field_40 = b;
    sub_738334();
}
