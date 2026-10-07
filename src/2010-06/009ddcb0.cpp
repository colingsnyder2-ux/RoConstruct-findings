// roc 2010-06 009ddcb0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddcb0
//
// 009ddcb0  b93c88c000           mov ecx, 0xc0883c
// 009ddcb5  e91651b4ff           jmp 0x522dd0
// auto-matched from its assembly shape

struct T_func_009ddcb0 { void m(); };
extern T_func_009ddcb0 G1_func_009ddcb0;
void func_009ddcb0()
{
    G1_func_009ddcb0.m();
}
