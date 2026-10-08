// from server: 100% by colin
// roc 2007-08 005b3e20  unit: RBX::Assembly  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3e20
//
// 005b3e20  8d442404             lea eax, [esp + 4]
// 005b3e24  50                   push eax
// 005b3e25  83c140               add ecx, 0x40
// 005b3e28  e8031d0500           call 0x605b30
// 005b3e2d  c20400               ret 4

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
