// roc 2010-06 0098ad00  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098ad00
//
// 0098ad00  b9ec4dc000           mov ecx, 0xc04dec
// 0098ad05  e9b684b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098ad00 { void m(); };
extern T_func_0098ad00 G1_func_0098ad00;
void func_0098ad00()
{
    G1_func_0098ad00.m();
}
