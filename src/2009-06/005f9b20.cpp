// from server: 87% by why2
struct EnumDescriptor {
    int field_0;
    int field_4;
};

extern void func_005f9a80(EnumDescriptor*);

void func_005f9b20(EnumDescriptor* d)
{
    func_005f9a80(*(EnumDescriptor**)((char*)d + 4));
}
