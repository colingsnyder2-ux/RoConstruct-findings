// roc 2011-06 00a3fad0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fad0
//
// 00a3fad0  b9cc82d100           mov ecx, 0xd182cc
// 00a3fad5  e96631dfff           jmp 0x832c40
// auto-matched from its assembly shape

struct T_func_00a3fad0 { void m(); };
extern T_func_00a3fad0 G1_func_00a3fad0;
void func_00a3fad0()
{
    G1_func_00a3fad0.m();
}
