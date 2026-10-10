// from server: 47% by colin
struct CSingleWorkspace {
    char pad[0x15c];
    int field_15c;
    char pad2[0x210 - 0x160];
    int field_210;
    int method();
};

extern "C" void __cdecl sub_6ca460();
extern "C" void __cdecl sub_68a470();
extern "C" void __cdecl sub_63a120(int);

int CSingleWorkspace::method()
{
    sub_6ca460();
    *(int*)((char*)this + 0x168) = 0x7cfa34;
    sub_68a470();
    *(int*)this = 0x7cfb24;
    *(int*)((char*)this + 0x20) = 0x7cfac4;
    *(int*)((char*)this + 0x210) = 0;
    *(int*)((char*)this + 0x15c) = 0xdc;
    sub_63a120(0x12);
    return (int)this;
}
