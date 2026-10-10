// from server: 89% by colin
// roc 2007-08 00720f30  unit: CXTButtonThemeOffice2003  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720f30

struct CXTButtonThemeOffice2003 {
    char pad[0x24];
    int field_24;
    char pad2[0x20];
    int field_48;
    char pad3[0x08];
    int field_54;
    char pad4[0x24];
    int field_7c;
    char pad5[0x0c];
    int field_8c;
    char pad6[0x08];
    int field_98;
    char pad7[0x08];
    int field_a4;
    char pad8[0x08];
    int field_b0;
    char pad9[0x08];
    int field_bc;
    void sub_720c80();
    void sub_720f30();
};

extern "C" int __stdcall sub_668f70();
extern "C" int __stdcall sub_668d70();
extern "C" int __stdcall sub_668770(int);

void CXTButtonThemeOffice2003::sub_720f30()
{
    sub_720c80();
    int v1 = sub_668f70();
    sub_668d70();
    int v2 = sub_668f70();
    int v3 = sub_668770(0xf);
    this->field_24 = v3;
    int zero = 0;
    if (v1 != zero) {
        this->field_98 = 0xc2eeff;
        this->field_8c = 0x3e80fe;
        this->field_bc = 0x6fc0ff;
        *(int*)((char*)this + 0x30) = zero;
    }
    int eax = v1 - 1;
    this->field_b0 = zero;
    this->field_a4 = zero;
    if (eax != 0) {
        eax = eax - 1;
        if (eax != 0) {
            eax = eax - 1;
            if (eax == 0) {
                this->field_24 = 0xd3c0c0;
                this->field_54 = 0xb2aca5;
                this->field_48 = 0xb4b4b;
            }
        } else {
            this->field_24 = 0x9fd4c5;
            this->field_54 = 0x7fb9a4;
            this->field_48 = 0x385d3f;
        }
    } else {
        this->field_24 = 0xf0c7a9;
        this->field_54 = 0xb99d7f;
        this->field_48 = 0x800000;
    }
    if (this->field_7c == zero) {
        int v5 = sub_668f70();
        int v6 = sub_668770(0xf);
        this->field_24 = v6;
    }
}
