// roc 2010-06 009e0f10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f10
//
// 009e0f10  b91078c100           mov ecx, 0xc17810
// 009e0f15  e9c6ffbcff           jmp 0x5b0ee0
// auto-matched from its assembly shape

struct T_func_009e0f10 { void m(); };
extern T_func_009e0f10 G1_func_009e0f10;
void func_009e0f10()
{
    G1_func_009e0f10.m();
}
