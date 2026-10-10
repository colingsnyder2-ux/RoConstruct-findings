// from server: 55% by colin
struct SignalDesc {
    char pad0[0xa4];
    int field_a4;
    int field_a8;
    char pad_ac[0xb0 - 0xac];
    int field_b0;
    int field_b4;
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    char field_c8[0xe4 - 0xc8];
    unsigned char field_e4;

    SignalDesc(const char* name);
};

extern "C" void __stdcall sub_4b3b20();
extern "C" int __cdecl sub_418690();
extern "C" void __stdcall sub_77e698(char* dest, const char* src);

SignalDesc::SignalDesc(const char* name)
{
    this->field_a4 = 0;
    this->field_a8 = 0;
    *(int*)this = 0x7a64b8;
    sub_4b3b20();
    *(int*)((char*)this + 4) = 0x7a66b0;
    *(int*)((char*)this + 8) = sub_418690();
    *(int*)((char*)this + 0x10) = 0x786d0c;
    *(int*)((char*)this + 0x14) = 0x7a64c4;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x28) = 0;
    *(int*)((char*)this + 0x2c) = 0x7a64d4;
    *(int*)((char*)this + 0x34) = 0;
    *(int*)((char*)this + 0x38) = 0;
    *(int*)((char*)this + 0x3c) = 0;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 0x44) = 0x7a64e4;
    *(int*)((char*)this + 0x4c) = 0;
    *(int*)((char*)this + 0x50) = 0;
    *(int*)((char*)this + 0x54) = 0;
    *(int*)((char*)this + 0x58) = 0;
    *(int*)((char*)this + 0x5c) = 0x7a64f4;
    *(int*)((char*)this + 0x64) = 0;
    *(int*)((char*)this + 0x68) = 0;
    *(int*)((char*)this + 0x6c) = 0;
    *(int*)((char*)this + 0x70) = 0;
    *(int*)((char*)this + 0x74) = 0x7a6504;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x8c) = 0x7a6514;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;
    *(int*)((char*)this + 0xa0) = 0;
    *(int*)this = 0x7a6594;
    *(int*)((char*)this + 4) = 0x7a658c;
    *(int*)((char*)this + 0x10) = 0x7a6584;
    *(int*)((char*)this + 0x14) = 0x7a6574;
    *(int*)((char*)this + 0x2c) = 0x7a6564;
    *(int*)((char*)this + 0x44) = 0x7a6554;
    *(int*)((char*)this + 0x5c) = 0x7a6544;
    *(int*)((char*)this + 0x74) = 0x7a6534;
    *(int*)((char*)this + 0x8c) = 0x7a6524;
    *(int*)((char*)this + 0xb0) = 0;
    *(int*)((char*)this + 0xb4) = 0;
    *(int*)((char*)this + 0xb8) = 0;
    *(int*)((char*)this + 0xbc) = 0;
    *(int*)((char*)this + 0xc0) = 0;
    *(int*)((char*)this + 0xc4) = 0;
    sub_77e698((char*)this + 0xc8, name);
    this->field_e4 = 1;
}
