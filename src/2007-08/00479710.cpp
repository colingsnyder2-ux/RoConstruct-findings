// from server: 79% by colin
// roc 2007-08 00479710  unit: seg_00470000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479710

extern "C" {
    void __stdcall glClear(unsigned int mask);
    void __stdcall glColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void __stdcall glDepthMask(unsigned char flag);
    void __stdcall glGetIntegerv(unsigned int pname, int* params);
    void __stdcall glStencilMask(unsigned int mask);
}

struct S {
    void sub_479690();
    void sub_4796d0();
    void func(unsigned char a, unsigned char b, unsigned char c, unsigned char d);
    char pad[0x6c];
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    char pad2[0x3e1 - 0x7c];
    unsigned char field_3e1;
    unsigned char field_3e2;
    unsigned char field_3e3;
};

void S::func(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
    int local;
    int flags = 0;
    this->field_74 += 1;
    this->field_6c += 1;
    this->sub_479690();
    if (a) {
        this->field_78 += 1;
        flags = 0x4000;
        if (!this->field_3e2) {
            this->field_70 += 1;
            glColorMask(1, 1, 1, this->field_3e3 != 0);
            this->field_3e2 = 1;
        }
    }
    if (b) {
        this->field_78 += 1;
        flags |= 0x100;
        if (!this->field_3e1) {
            this->field_70 += 1;
            glDepthMask(1);
            this->field_3e1 = 1;
        }
    }
    glGetIntegerv(0xb98, &local);
    if (c) {
        flags |= 0x400;
        glClear(0xffffffff);
        this->field_70 += 1;
        this->field_78 += 1;
    }
    glStencilMask(flags);
    glClear(local);
    this->field_70 += 1;
    this->field_78 += 1;
    this->sub_4796d0();
}
