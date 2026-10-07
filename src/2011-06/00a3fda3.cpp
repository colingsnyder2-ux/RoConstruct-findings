// roc 2011-06 00a3fda3  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fda3
//
// 00a3fda3  b9a893d100           mov ecx, 0xd193a8
// 00a3fda8  e96f3fecff           jmp 0x903d1c
// auto-matched from its assembly shape

struct T_func_00a3fda3 { void m(); };
extern T_func_00a3fda3 G1_func_00a3fda3;
void func_00a3fda3()
{
    G1_func_00a3fda3.m();
}
