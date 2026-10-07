// roc 2009-06 00898af0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898af0
//
// 00898af0  b91894a400           mov ecx, 0xa49418
// 00898af5  e9e644d5ff           jmp 0x5ecfe0
// auto-matched from its assembly shape

struct T_func_00898af0 { void m(); };
extern T_func_00898af0 G1_func_00898af0;
void func_00898af0()
{
    G1_func_00898af0.m();
}
