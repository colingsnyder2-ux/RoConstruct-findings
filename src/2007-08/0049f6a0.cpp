// from server: 37% by colin
struct Descriptor {
    void construct();
    void setVtable(int);
};

struct FunctionDescriptor {
    void construct();
};

struct BoundFuncDesc {
    char pad0[0xfc];
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int field_118;
    int field_11c;
    int field_120;
    int field_124;
    int field_f8;

    BoundFuncDesc();
};

extern "C" {
    void __stdcall sub_49ED20();
    void __stdcall sub_4A3F30();
    void __stdcall sub_4AA740();
    void __stdcall sub_541BF0();
    void __stdcall sub_77E698();
    void __stdcall sub_77E6AC();
}

extern int dword_8B5188;
extern int dword_8BE4C8;
extern int dword_8BE4B4;
extern int dword_8BE4C4;
extern char byte_89020C;

BoundFuncDesc::BoundFuncDesc()
{
    sub_49ED20();
    sub_4A3F30();
    *(int*)((char*)this + 0x00) = 0x79c894;
    *(int*)((char*)this + 0x04) = 0x79c888;
    *(int*)((char*)this + 0x10) = 0x79c880;
    *(int*)((char*)this + 0x14) = 0x79c870;
    *(int*)((char*)this + 0x2c) = 0x79c860;
    *(int*)((char*)this + 0x44) = 0x79c850;
    *(int*)((char*)this + 0x5c) = 0x79c840;
    *(int*)((char*)this + 0x74) = 0x79c830;
    *(int*)((char*)this + 0x8c) = 0x79c820;
    *(int*)((char*)this + 0xe8) = 0x79c7f0;
    *(int*)((char*)this + 0xec) = 0x79c7e4;
    *(int*)((char*)this + 0xfc) = 0x79c7d8;
    *(int*)((char*)this + 0x118) = 0;
    *(int*)((char*)this + 0x11c) = 0;
    *(int*)((char*)this + 0x120) = 0;
    *(int*)((char*)this + 0x124) = 0;
    sub_77E698();
    sub_541BF0();
    sub_77E6AC();
    (*(void(__thiscall**)(int, int))(*(int*)(*(int*)((char*)this + 0xf8)) + 0x10))(*(int*)((char*)this + 0xf8), 0x20);
    if (dword_8BE4C8 >= 0x10) {
        (*(void(__thiscall**)(int, int, int))(*(int*)(*(int*)((char*)this + 0xf8)) + 0x1c))(*(int*)((char*)this + 0xf8), dword_8BE4B4, dword_8BE4C4);
    } else {
        (*(void(__thiscall**)(int, int, int))(*(int*)(*(int*)((char*)this + 0xf8)) + 0x1c))(*(int*)((char*)this + 0xf8), (int)&dword_8BE4B4, dword_8BE4C4);
    }
    sub_4AA740();
}
