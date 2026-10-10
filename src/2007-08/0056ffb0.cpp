// from server: 33% by colin
struct EnumDesc {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    EnumDesc(int a, int b, int c);
};

extern "C" int __stdcall sub_52C940(int, int);

EnumDesc::EnumDesc(int a, int b, int c)
{
    vtable = (void*)0x7870b4;
    field4 = sub_52C940(-1, a);
    vtable = (void*)0x7aa0dc;
    field8 = sub_52C940(-1, b);
    fieldC = c;
}
