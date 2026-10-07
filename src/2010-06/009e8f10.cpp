// roc 2010-06 009e8f10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8f10
//
// 009e8f10  b9e854c200           mov ecx, 0xc254e8
// 009e8f15  e9e6a3ddff           jmp 0x7c3300
// auto-matched from its assembly shape

struct T_func_009e8f10 { void m(); };
extern T_func_009e8f10 G1_func_009e8f10;
void func_009e8f10()
{
    G1_func_009e8f10.m();
}
