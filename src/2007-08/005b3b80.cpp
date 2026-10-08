// from server: 100% by colin
// roc 2007-08 005b3b80  unit: RBX::Assembly  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3b80
//
// 005b3b80  83ec0c               sub esp, 0xc
// 005b3b83  8d442410             lea eax, [esp + 0x10]
// 005b3b87  50                   push eax
// 005b3b88  8d542404             lea edx, [esp + 4]
// 005b3b8c  52                   push edx
// 005b3b8d  83c124               add ecx, 0x24
// 005b3b90  e81bee0200           call 0x5e29b0
// 005b3b95  83c40c               add esp, 0xc
// 005b3b98  c20400               ret 4

struct AssemblyHelper
{
    void method(int* a, int* b);
};

struct Assembly
{
    char pad[0x24];
    AssemblyHelper helper;
    void func(int arg);
};

void Assembly::func(int arg)
{
    int local[3];
    helper.method(local, &arg);
}
