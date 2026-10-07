// roc 2010-06 009e6b90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6b90
//
// 009e6b90  b9e0fcc100           mov ecx, 0xc1fce0
// 009e6b95  e9d6f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6b90 { void m(); };
extern T_func_009e6b90 G1_func_009e6b90;
void func_009e6b90()
{
    G1_func_009e6b90.m();
}
