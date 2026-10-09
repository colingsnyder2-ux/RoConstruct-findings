// roc 2007-03 005ac7e0  unit: seg_005a0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac7e0
//
// 005ac7e0  8d442404             lea eax, [esp + 4]
// 005ac7e4  50                   push eax
// 005ac7e5  83c140               add ecx, 0x40
// 005ac7e8  e803feffff           call 0x5ac5f0
// 005ac7ed  c20400               ret 4
// copied from an identical function in another client (function ?f@Outer@ns_ROCX00000e@@QAEHH@Z)

namespace ns_ROCX00000e {
struct Inner {
    int calc(int* p);
};

struct Outer {
    char pad[0x40];
    Inner inner;
    int f(int a);
};

int Outer::f(int a) {
    return inner.calc(&a);
}
}
