// roc 2011-06 00a39de0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39de0
//
// 00a39de0  b960c0cc00           mov ecx, 0xccc060
// 00a39de5  e92627a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39de0 { void m(); };
extern T_func_00a39de0 G1_func_00a39de0;
void func_00a39de0()
{
    G1_func_00a39de0.m();
}
