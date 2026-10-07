// roc 2010-06 009e8c70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8c70
//
// 009e8c70  b98c30c200           mov ecx, 0xc2308c
// 009e8c75  e95621d7ff           jmp 0x75add0
// auto-matched from its assembly shape

struct T_func_009e8c70 { void m(); };
extern T_func_009e8c70 G1_func_009e8c70;
void func_009e8c70()
{
    G1_func_009e8c70.m();
}
