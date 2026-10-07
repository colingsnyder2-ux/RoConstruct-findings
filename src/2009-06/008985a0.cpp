// roc 2009-06 008985a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008985a0
//
// 008985a0  b9287fa400           mov ecx, 0xa47f28
// 008985a5  e9661db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008985a0 { void m(); };
extern T_func_008985a0 G1_func_008985a0;
void func_008985a0()
{
    G1_func_008985a0.m();
}
