// roc 2009-06 00898a70  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a70
//
// 00898a70  b9989ba400           mov ecx, 0xa49b98
// 00898a75  e91651d5ff           jmp 0x5edb90
// auto-matched from its assembly shape

struct T_func_00898a70 { void m(); };
extern T_func_00898a70 G1_func_00898a70;
void func_00898a70()
{
    G1_func_00898a70.m();
}
