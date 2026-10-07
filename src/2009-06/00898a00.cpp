// roc 2009-06 00898a00  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a00
//
// 00898a00  b928a2a400           mov ecx, 0xa4a228
// 00898a05  e9d65dd5ff           jmp 0x5ee7e0
// auto-matched from its assembly shape

struct T_func_00898a00 { void m(); };
extern T_func_00898a00 G1_func_00898a00;
void func_00898a00()
{
    G1_func_00898a00.m();
}
