// roc 2010-06 009dd6f0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd6f0
//
// 009dd6f0  b97867c000           mov ecx, 0xc06778
// 009dd6f5  e9768ebbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009dd6f0 { void m(); };
extern T_func_009dd6f0 G1_func_009dd6f0;
void func_009dd6f0()
{
    G1_func_009dd6f0.m();
}
