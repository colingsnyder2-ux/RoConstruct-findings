// roc 2009-06 00898b30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898b30
//
// 00898b30  b95890a400           mov ecx, 0xa49058
// 00898b35  e9463cd5ff           jmp 0x5ec780
// auto-matched from its assembly shape

struct T_func_00898b30 { void m(); };
extern T_func_00898b30 G1_func_00898b30;
void func_00898b30()
{
    G1_func_00898b30.m();
}
