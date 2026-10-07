// roc 2010-06 009e0ea0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ea0
//
// 009e0ea0  b9a07ec100           mov ecx, 0xc17ea0
// 009e0ea5  e91615bdff           jmp 0x5b23c0
// auto-matched from its assembly shape

struct T_func_009e0ea0 { void m(); };
extern T_func_009e0ea0 G1_func_009e0ea0;
void func_009e0ea0()
{
    G1_func_009e0ea0.m();
}
