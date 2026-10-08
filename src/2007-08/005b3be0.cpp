// from server: 100% by colin
// roc 2007-08 005b3be0  unit: RBX::Assembly  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3be0
//
// 005b3be0  83ec0c               sub esp, 0xc
// 005b3be3  8d442410             lea eax, [esp + 0x10]
// 005b3be7  50                   push eax
// 005b3be8  8d542404             lea edx, [esp + 4]
// 005b3bec  52                   push edx
// 005b3bed  83c118               add ecx, 0x18
// 005b3bf0  e8bbed0200           call 0x5e29b0
// 005b3bf5  83c40c               add esp, 0xc
// 005b3bf8  c20400               ret 4

struct AssemblyHelper
{
    void method(int* a, int* b);
};

struct Assembly
{
    char pad[0x18];
    AssemblyHelper helper;
    void func(int arg);
};

void Assembly::func(int arg)
{
    int local[3];
    helper.method(&local[0], &arg);
}
