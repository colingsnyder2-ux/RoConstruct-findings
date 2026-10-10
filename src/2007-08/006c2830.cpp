// from server: 36% by colin
struct CXTPNativeXPTheme {
    char pad0[0x68];
    int field_68;
    int field_6c;
    char pad1[0x128 - 0x70];
    int field_128;
    char pad2[0x130 - 0x12c];
    int field_130;
    char pad3[0x43c - 0x134];
    int field_43c;
    char field_440[8];
    char field_448[8];
    char field_450[8];
    char field_458[8];
    char field_460[8];
    char pad5[0x470 - 0x468];
    int field_470;

    CXTPNativeXPTheme();
};

extern "C" void __stdcall sub_6b7f20();
extern "C" void __stdcall sub_69e7a0();

CXTPNativeXPTheme::CXTPNativeXPTheme()
{
    sub_6b7f20();
    *(int*)this = 0x7d71bc;
    sub_69e7a0();
    sub_69e7a0();
    sub_69e7a0();
    sub_69e7a0();
    sub_69e7a0();
    field_128 = 1;
    field_130 = 0;
    field_43c = 7;
    field_470 = 1;
    field_68 = 1;
    field_6c = 1;
}
