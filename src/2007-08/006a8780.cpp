// from server: 69% by colin
struct Result {
    int value;
    int count;
};

struct Inner {
    char pad[0xfc];
    int field_fc;
};

struct CXTPRibbonBarControlQuickAccessPopup {
    char pad[0xfc];
    int field_fc;
    void method(Result* out, int arg2);
};

extern "C" Inner* __fastcall sub_643a40(int);

void CXTPRibbonBarControlQuickAccessPopup::method(Result* out, int arg2) {
    Inner* p = sub_643a40(this->field_fc);
    int n = p->field_fc;
    out->count = n;
    out->value = n / 13;
}
