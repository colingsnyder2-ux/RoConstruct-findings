// from server: 72% by colin
// roc 2007-08 005b3c40  unit: RBX::Assembly  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3c40
//
// 005b3c40  83ec0c               sub esp, 0xc
// 005b3c43  8d442410             lea eax, [esp + 0x10]
// 005b3c47  50                   push eax
// 005b3c48  8d542404             lea edx, [esp + 4]
// 005b3c4c  52                   push edx
// 005b3c4d  83c140               add ecx, 0x40
// 005b3c50  e85bed0200           call 0x5e29b0
// 005b3c55  83c40c               add esp, 0xc
// 005b3c58  c20400               ret 4

struct Assembly {
    char pad[0x40];
    void sub_005e29b0(int* a, int* b);
    void func_005b3c40(int arg);
};

void Assembly::func_005b3c40(int arg)
{
    int local1;
    int local2;
    sub_005e29b0(&local1, &local2);
}
