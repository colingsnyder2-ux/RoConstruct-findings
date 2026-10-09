// from server: 72% by colin
// roc 2007-08 0048eb70  unit: seg_00480000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048eb70

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" void __stdcall sub_77e710(int);
extern "C" void __cdecl sub_841e0c();

struct BoundFuncDesc {
    char pad[0x28];
    int (__fastcall *fn)(int);
    int obj;
    int invoke(int a, int b);
};

int BoundFuncDesc::invoke(int a, int b)
{
    int r = sub_630d36(a, 0, 0x88209c, 0x88e1c8, 0);
    if (r == 0) {
        sub_77e710(0x786e04);
        sub_630b9e((int)&r, 0x841e0c);
    }
    return fn(obj + r);
}
