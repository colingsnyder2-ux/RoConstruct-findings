// roc 2008-06 00801670  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801670
//
// 00801670  b94ce09700           mov ecx, 0x97e04c
// 00801675  e956f8f0ff           jmp 0x710ed0
// auto-matched from its assembly shape

struct T_func_00801670 { void m(); };
extern T_func_00801670 G1_func_00801670;
void func_00801670()
{
    G1_func_00801670.m();
}
