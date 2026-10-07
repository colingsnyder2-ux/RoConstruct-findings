// roc 2011-06 00a325a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a325a0
//
// 00a325a0  b92863cb00           mov ecx, 0xcb6328
// 00a325a5  e916aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a325a0 { void m(); };
extern T_func_00a325a0 G1_func_00a325a0;
void func_00a325a0()
{
    G1_func_00a325a0.m();
}
