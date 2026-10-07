// roc 2010-06 009e7c70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c70
//
// 009e7c70  b96016c200           mov ecx, 0xc21660
// 009e7c75  e9f6e8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7c70 { void m(); };
extern T_func_009e7c70 G1_func_009e7c70;
void func_009e7c70()
{
    G1_func_009e7c70.m();
}
