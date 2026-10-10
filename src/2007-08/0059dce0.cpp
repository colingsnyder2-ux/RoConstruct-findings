// from server: 45% by colin
struct EnumDescriptor {
    void construct();
};

struct EnumDesc {
    char pad0[0x0c];
    int field0c;
    char pad10[0xdc];
    int fieldec;
    char pade8[0x04];
    int fielde8;

    EnumDesc();
};

extern "C" int __cdecl sub_58DE50();

EnumDesc::EnumDesc()
{
    ((EnumDescriptor*)this)->construct();
    field0c = 0;
    *(int*)((char*)this + 0x00) = 0x7b22ec;
    *(int*)((char*)this + 0x04) = 0x7b22e0;
    *(int*)((char*)this + 0x10) = 0x7b22d8;
    *(int*)((char*)this + 0x14) = 0x7b22c8;
    *(int*)((char*)this + 0x2c) = 0x7b22b8;
    *(int*)((char*)this + 0x44) = 0x7b22a8;
    *(int*)((char*)this + 0x5c) = 0x7b2298;
    *(int*)((char*)this + 0x74) = 0x7b2288;
    *(int*)((char*)this + 0x8c) = 0x7b2278;
    *(int*)((char*)this + 0xe8) = 0x7b2270;
    fielde8 = sub_58DE50();
}
