// from server: 100% by colin
// roc 2007-08 005b3e10  unit: RBX::Assembly  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3e10
//
// 005b3e10  8d442404             lea eax, [esp + 4]
// 005b3e14  50                   push eax
// 005b3e15  83c118               add ecx, 0x18
// 005b3e18  e8131d0500           call 0x605b30
// 005b3e1d  c20400               ret 4

struct Inner {
    void method(void** p);
};

struct Assembly {
    char pad[0x18];
    Inner inner;
    void f(void* arg);
};

void Assembly::f(void* arg) {
    inner.method(&arg);
}
