// from server: 38% by colin
struct EnumPropertyDescriptor {
    void construct();
};

struct EnumPropDescriptor {
    char pad0[0x0c];
    int field0c;
    char pad10[0x90];
    EnumPropDescriptor();
};

extern "C" void __stdcall sub_5797d0();
extern "C" int __stdcall sub_579ee0();

EnumPropDescriptor::EnumPropDescriptor()
{
    sub_5797d0();
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x00) = 0x7ab36c;
    *(int*)((char*)this + 0x04) = 0x7ab364;
    *(int*)((char*)this + 0x10) = 0x7ab35c;
    *(int*)((char*)this + 0x14) = 0x7ab34c;
    *(int*)((char*)this + 0x2c) = 0x7ab33c;
    *(int*)((char*)this + 0x44) = 0x7ab32c;
    *(int*)((char*)this + 0x5c) = 0x7ab31c;
    *(int*)((char*)this + 0x74) = 0x7ab30c;
    *(int*)((char*)this + 0x8c) = 0x7ab2fc;
    field0c = sub_579ee0();
}
