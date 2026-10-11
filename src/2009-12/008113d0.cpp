// from server: 52% by atomic.potato
extern "C" {
    int __cdecl sub_00804a70();
    int __cdecl sub_007f3860();
    int __cdecl sub_0084c210(int, int, int, int);
    int __cdecl sub_008903c0(int*, void*);
}

struct CControlButtonExpand {
    char pad0[0x54];
    int field_54;
    char pad58[4];
    int field_5c;
    char pad60[0x8c];
    int field_ec;
    char padf0[0x44];
    int field_134;
    char pad138[0x48];
    int field_180;
    int field_184;
    int field_188;
    int field_18c;
    int field_190;
    int field_194;
    int field_198;
    int field_19c;
    int field_1a0;
    int field_1a4;

    CControlButtonExpand();
};

CControlButtonExpand::CControlButtonExpand()
{
    sub_00804a70();
    this->field_180 = 0;
    this->field_184 = 0;
    this->field_188 = 1;
    this->field_18c = 0;
    this->field_134 = 1;
    this->field_198 = 0;
    this->field_19c = 1;
    this->field_190 = 0;
    this->field_194 = 0;
    this->field_1a0 = 1;
    this->field_1a4 = 0;

    int* p = (int*)sub_007f3860();
    if (p != 0) {
        sub_008903c0(p, this);
    } else {
        p = 0;
    }
    this->field_184 = (int)p;
    this->field_ec = 0x3f;
    sub_0084c210(0, 8, 0x9f37fc, 0);
}
