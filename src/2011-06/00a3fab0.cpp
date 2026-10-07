// roc 2011-06 00a3fab0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fab0
//
// 00a3fab0  b9ac81d100           mov ecx, 0xd181ac
// 00a3fab5  e95666ddff           jmp 0x816110
// auto-matched from its assembly shape

struct T_func_00a3fab0 { void m(); };
extern T_func_00a3fab0 G1_func_00a3fab0;
void func_00a3fab0()
{
    G1_func_00a3fab0.m();
}
