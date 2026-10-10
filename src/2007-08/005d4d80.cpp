// from server: 40% by colin
struct S {
    char pad0[0x10];
    int f4;
    char pad1[0x18];
    int f10;
    int f14;
    char pad2[0x14];
    int f2c;
    char pad3[0x14];
    int f44;
    char pad4[0x14];
    int f5c;
    char pad5[0x14];
    int f74;
    char pad6[0x14];
    int f8c;
    char pad7[0x58];
    int fe8;
    void init();
    void init2();
    S();
};

extern "C" void __stdcall sub_555c70();
extern "C" void __stdcall sub_555810();

void S::init() {}
void S::init2() {}

S::S() {
    sub_555c70();
    f4 = 0x7a86d4;
    f10 = 0x7a86c8;
    f14 = 0x7a86c0;
    f2c = 0x7a86b0;
    f44 = 0x7a86a0;
    f5c = 0x7a8690;
    f74 = 0x7a8680;
    f8c = 0x7a8670;
    fe8 = 0x7a8660;
    sub_555810();
}
