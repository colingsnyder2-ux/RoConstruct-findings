// from server: 90% by colin
struct CXTPTabClientWnd {
    char pad[0x84];
    int field_84;
    char pad2[0xb4 - 0x88];
    int field_b4;
    char pad3[0xc8 - 0xb8];
    int field_c8;
    char pad4[0x120 - 0xcc];
    int field_120;
    int sub_68a0b0(int, int, int, int*);
};

extern "C" int __stdcall sub_696890(int, int, int, int, int);
extern "C" int __stdcall sub_62fddc(int, int, int, int, int);

int CXTPTabClientWnd::sub_68a0b0(int a, int b, int c, int* d) {
    sub_696890(this->field_c8, (int)this, c, b, a);
    if (c == this->field_120 && this->field_b4 != 0 && this->field_84 != 0) {
        *d = 1;
        return 1;
    }
    return sub_62fddc((int)this, c, b, a, (int)d);
}
