// from server: 66% by colin
// roc 2007-08 00582f20  unit: RBX::VAccoutrement::?$FactoryProduct  size: 402 bytes

extern "C" {
    int __stdcall sub_475050(int);
    int __stdcall sub_541bf0();
    int __stdcall sub_582e90();
}

struct String {
    char data[0x1c];
};

extern "C" {
    void __stdcall MSVCP80_basic_string_ctor(String*, const char*);
    void __stdcall MSVCP80_basic_string_dtor(String*);
}

struct S {
    char pad[0xf8];
    int f8;
    int fc;
    int f100;
    char pad3[0x130 - 0x104];
    int f130;
    int f134;
    int f138;
    char pad4[0x140 - 0x13c];
    int f140;
    int f144;
    char f148;
    char pad5[0x14c - 0x149];
    char f14c;
    char pad6[0x154 - 0x14d];
    int f154;
    int f158;
    char f15c;
    char pad7[0x160 - 0x15d];
    char f160;
    char pad8[0x168 - 0x161];
    int f168;
    int f16c;
    char f170;
    char pad9[0x174 - 0x171];
    char f174;
    char pad10[0x17c - 0x175];
    int f17c;
    int f180;

    S(int);
};

S::S(int arg) {
    if (arg != 0) {
        *(int*)((char*)this + 0xf8) = 0x7ac5c0;
        *(int*)((char*)this + 0x17c) = 0x7a4ccc;
    }
    sub_582e90();
    int neg = -1;
    *(int*)((char*)this + 0xe8) = 0x7a4c8c;
    *(int*)((char*)this + 0xec) = neg;
    *(int*)((char*)this + 0xf0) = neg;
    *(int*)((char*)this + 0xf4) = 0;
    int v = *(int*)((char*)this + 0xf8);
    *(int*)((char*)this + 0x00) = 0x7ac1d4;
    *(int*)((char*)this + 0x04) = 0x7ac1cc;
    *(int*)((char*)this + 0x10) = 0x7ac1c4;
    *(int*)((char*)this + 0x14) = 0x7ac1b4;
    *(int*)((char*)this + 0x2c) = 0x7ac1a4;
    *(int*)((char*)this + 0x44) = 0x7ac194;
    *(int*)((char*)this + 0x5c) = 0x7ac184;
    *(int*)((char*)this + 0x74) = 0x7ac174;
    *(int*)((char*)this + 0x8c) = 0x7ac164;
    *(int*)((char*)this + 0xe8) = 0x7ac14c;
    int ecx = *(int*)(v + 4);
    *(int*)(ecx + (int)this + 0xf8) = 0x7ac144;
    int edx = *(int*)((char*)this + 0xf8);
    int eax = *(int*)(edx + 4);
    int ecx2 = eax - 0x84;
    *(int*)(eax + (int)this + 0xf4) = ecx2;
    sub_475050((int)this + 0x100);
    *(int*)((char*)this + 0xfc) = 0;
    *(int*)((char*)this + 0x130) = 0;
    *(int*)((char*)this + 0x134) = 0;
    *(int*)((char*)this + 0x138) = 0;
    *(int*)((char*)this + 0x140) = 0;
    *(int*)((char*)this + 0x144) = 0;
    *(char*)((char*)this + 0x148) = 0;
    *(char*)((char*)this + 0x14c) = 0;
    *(int*)((char*)this + 0x154) = 0;
    *(int*)((char*)this + 0x158) = 0;
    *(char*)((char*)this + 0x15c) = 0;
    *(char*)((char*)this + 0x160) = 0;
    *(int*)((char*)this + 0x168) = 0;
    *(int*)((char*)this + 0x16c) = 0;
    *(char*)((char*)this + 0x170) = 0;
    *(char*)((char*)this + 0x174) = 0;

    String str;
    MSVCP80_basic_string_ctor(&str, "Accoutrement");
    sub_541bf0();
    MSVCP80_basic_string_dtor(&str);
}
