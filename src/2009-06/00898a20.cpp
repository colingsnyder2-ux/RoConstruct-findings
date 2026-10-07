// roc 2009-06 00898a20  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a20
//
// 00898a20  b948a0a400           mov ecx, 0xa4a048
// 00898a25  e98659d5ff           jmp 0x5ee3b0
// auto-matched from its assembly shape

struct T_func_00898a20 { void m(); };
extern T_func_00898a20 G1_func_00898a20;
void func_00898a20()
{
    G1_func_00898a20.m();
}
