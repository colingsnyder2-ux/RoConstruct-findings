// from server: 21% by colin
struct CXTColorPageStandard {
    char pad[0x88];
    int field_88;
    void sub_787650();
    void sub_7bc442();
    ~CXTColorPageStandard();
};

void CXTColorPageStandard::sub_787650() {}
void CXTColorPageStandard::sub_7bc442() {}

CXTColorPageStandard::~CXTColorPageStandard() {
    *(int*)this = 0x869b64;
    field_88 = 0;
    sub_787650();
    sub_7bc442();
}
