// from server: 66% by colin
// roc 2007-08 005412d0  unit: RBX::VInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005412d0

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" int __cdecl sub_5a3a00(int, int, int);
extern "C" void __stdcall sub_77e710();

struct BoundFuncDesc {
    int construct(int, int);
};

int BoundFuncDesc::construct(int a, int b) {
    int result = sub_630d36(a, 0, 0x88209c, 0x881f4c, 0);
    if (result == 0) {
        int local;
        sub_77e710();
        sub_630b9e((int)&local, 0x841e0c);
        result = sub_630b9e(0x786e04, 0x841e0c);
    }
    return sub_5a3a00((int)this, result, b + 4);
}
