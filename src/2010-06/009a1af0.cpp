// roc 2010-06 009a1af0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1af0
//
// 009a1af0  b950e6c100           mov ecx, 0xc1e650
// 009a1af5  e9c616b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1af0 { void m(); };
extern T_func_009a1af0 G1_func_009a1af0;
void func_009a1af0()
{
    G1_func_009a1af0.m();
}
