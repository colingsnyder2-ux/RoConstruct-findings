// roc 2011-06 00a3fd99  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd99
//
// 00a3fd99  b97c93d100           mov ecx, 0xd1937c
// 00a3fd9e  e95f3fecff           jmp 0x903d02
// auto-matched from its assembly shape

struct T_func_00a3fd99 { void m(); };
extern T_func_00a3fd99 G1_func_00a3fd99;
void func_00a3fd99()
{
    G1_func_00a3fd99.m();
}
