// from server: 67% by colin
// roc 2007-08 0052f3f0  unit: seg_00520000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f3f0

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" void __stdcall sub_77e710(int);
extern "C" void __stdcall sub_77e710_bad_cast(int);

struct BoundFuncDesc {
    char pad[0x28];
    int field28;
    int field2c;
    void method(int, int);
};

void BoundFuncDesc::method(int a, int b) {
    int r = sub_630d36(a, 0, 0x88209c, 0x89894c, 0);
    if (r == 0) {
        sub_77e710(0x786e04);
        sub_630b9e(0x841e0c, 0);
    }
    int (*fn)(void) = (int (*)(void))field2c;
    fn();
}
