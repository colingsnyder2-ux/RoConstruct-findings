// roc 2009-06 00895650  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895650
//
// 00895650  b980dfa300           mov ecx, 0xa3df80
// 00895655  e9b6a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895650 { void m(); };
extern T_func_00895650 G1_func_00895650;
void func_00895650()
{
    G1_func_00895650.m();
}
