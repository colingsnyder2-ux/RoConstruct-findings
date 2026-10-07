// roc 2010-06 009e5240  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5240
//
// 009e5240  b928dec100           mov ecx, 0xc1de28
// 009e5245  e92613bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5240 { void m(); };
extern T_func_009e5240 G1_func_009e5240;
void func_009e5240()
{
    G1_func_009e5240.m();
}
