// from server: 83% by tester
// roc 2007-08 00479710  unit: seg_00470000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479710

extern "C" {
    __declspec(dllimport) void __stdcall glClear(unsigned int mask);
    __declspec(dllimport) void __stdcall glColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    __declspec(dllimport) void __stdcall glDepthMask(unsigned char flag);
    __declspec(dllimport) void __stdcall glGetIntegerv(unsigned int pname, int *params);
    __declspec(dllimport) void __stdcall glStencilMask(unsigned int mask);
}

struct S {
    char pad[0x6c];
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    char pad2[0x3e1 - 0x7c];
    unsigned char field_3e1;
    unsigned char field_3e2;
    unsigned char field_3e3;
    char pad3[0x880 - 0x3e4];
    int field_880;
    int field_884;
    void sub_479690();
    void sub_4796d0();
    void func(unsigned char a, unsigned char b, unsigned char c, unsigned char d);
};

void S::func(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
    int mask = 0;
    this->field_74 += 1;
    this->field_6c += 1;
    this->sub_479690();
    if (a) {
        this->field_78 += 1;
        mask = 0x4000;
        if (!this->field_3e2) {
            this->field_70 += 1;
            glClear((this->field_3e3 != 0) ? 1 : 0);
            this->field_3e2 = 1;
        }
    }
    if (b) {
        this->field_78 += 1;
        mask |= 0x100;
        if (!this->field_3e1) {
            this->field_70 += 1;
            glDepthMask(1);
            this->field_3e1 = 1;
        }
    }
    int params;
    glGetIntegerv(0xb98, &params);
    if (c) {
        mask |= 0x400;
        glStencilMask(0xffffffff);
        this->field_70 += 1;
        this->field_78 += 1;
    }
    glColorMask((mask & 0x400) != 0, (mask & 0x400) != 0, (mask & 0x400) != 0, (mask & 0x400) != 0);
    glStencilMask(params);
    this->field_70 += 1;
    this->field_78 += 1;
    this->sub_4796d0();
}
