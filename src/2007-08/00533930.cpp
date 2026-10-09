// from server: 68% by colin
// roc 2007-08 00533930  unit: RBX::VSelection  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533930

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_630B9E(int, int);
extern "C" void __stdcall sub_77E710(int);
extern "C" int __cdecl sub_5A3A00(int, int, int);

struct RBX_VSelection_BoundFuncDesc {
    int construct(int, int);
};

int RBX_VSelection_BoundFuncDesc::construct(int a, int b)
{
    int result;
    int local;
    result = sub_630D36(a, 0, 0x8995b4, 0x88209c, 0);
    if (result == 0) {
        sub_77E710(0x786e04);
        sub_630B9E((int)&local, 0x841e0c);
        result = local;
    }
    return sub_5A3A00(result, b + 4, (int)this);
}
