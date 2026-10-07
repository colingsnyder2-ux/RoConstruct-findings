// roc 2011-06 00a3cd20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cd20
//
// 00a3cd20  b9a811cd00           mov ecx, 0xcd11a8
// 00a3cd25  e9e6f7a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3cd20 { void m(); };
extern T_func_00a3cd20 G1_func_00a3cd20;
void func_00a3cd20()
{
    G1_func_00a3cd20.m();
}
