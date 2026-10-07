// roc 2011-06 00a3fac0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fac0
//
// 00a3fac0  b9d081d100           mov ecx, 0xd181d0
// 00a3fac5  e96657deff           jmp 0x825230
// auto-matched from its assembly shape

struct T_func_00a3fac0 { void m(); };
extern T_func_00a3fac0 G1_func_00a3fac0;
void func_00a3fac0()
{
    G1_func_00a3fac0.m();
}
