// roc 2009-06 008984d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984d0
//
// 008984d0  b95089a400           mov ecx, 0xa48950
// 008984d5  e9361eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984d0 { void m(); };
extern T_func_008984d0 G1_func_008984d0;
void func_008984d0()
{
    G1_func_008984d0.m();
}
