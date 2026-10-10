// from server: 65% by colin
struct std_string {
    std_string(const char*);
    ~std_string();
};

struct ShirtGraphic {
    char pad[0xec];
    int field_e8;
    ShirtGraphic();
};

extern "C" void __stdcall sub_5A27B0();
extern "C" void __stdcall sub_541BF0(std_string*);
extern "C" void __stdcall sub_77E698(std_string*, const char*);
extern "C" void __stdcall sub_77E6AC(std_string*);

ShirtGraphic::ShirtGraphic()
{
    sub_5A27B0();
    *(int*)((char*)this + 0x00) = 0x7b4814;
    *(int*)((char*)this + 0x04) = 0x7b4808;
    *(int*)((char*)this + 0x10) = 0x7b4800;
    *(int*)((char*)this + 0x14) = 0x7b47f0;
    *(int*)((char*)this + 0x2c) = 0x7b47e0;
    *(int*)((char*)this + 0x44) = 0x7b47d0;
    *(int*)((char*)this + 0x5c) = 0x7b47c0;
    *(int*)((char*)this + 0x74) = 0x7b47b0;
    *(int*)((char*)this + 0x8c) = 0x7b47a0;
    *(int*)((char*)this + 0xe8) = 0xe2;

    std_string tmp((const char*)0x7b4794);
    sub_541BF0(&tmp);
    tmp.~std_string();
}
