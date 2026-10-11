// from server: 29% by colin
// roc 2008-06 0060c260  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c260

extern "C" void __cdecl sub_557330(int, int);
extern "C" void __cdecl sub_56c650();
extern "C" void __cdecl sub_5c0940();
extern "C" void __cdecl sub_60aa70();
extern "C" void __cdecl sub_60b850();
extern "C" void __cdecl sub_6a067a(void*);

struct S {
    void f(int, int, int, int, int, int, int);
    char pad[0x24];
};

void S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    sub_557330(0x60b8b0, 0x97bdac);
    int edi = (int)sub_60b850;
    sub_5c0940();
    sub_56c650();
    *(int*)((char*)this + 0x18) = edi;
    *(int*)this = 0x8432cc;
    sub_60aa70();
    *(int*)((char*)this + 0x1c) = 0;
    if (a7) {
        sub_6a067a((void*)a7);
    }
    sub_557330(0x60b8b0, 0x97bdac);
    *(int*)((char*)this + 0x20) = (int)sub_60b850;
}
