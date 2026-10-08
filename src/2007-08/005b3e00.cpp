// from server: 82% by colin
// roc 2007-08 005b3e00  unit: RBX::Assembly  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3e00
//
// 005b3e00  8d442404             lea eax, [esp + 4]
// 005b3e04  50                   push eax
// 005b3e05  83c124               add ecx, 0x24
// 005b3e08  e8231d0500           call 0x605b30
// 005b3e0d  c20400               ret 4

struct Assembly {
    char pad[0x24];
    void target(int);
};

extern "C" void __stdcall helper(int*);

void Assembly::target(int arg) {
    helper(&arg);
}
