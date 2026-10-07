// roc 2010-06 009e0ef0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ef0
//
// 009e0ef0  b9f079c100           mov ecx, 0xc179f0
// 009e0ef5  e9c605bdff           jmp 0x5b14c0
// auto-matched from its assembly shape

struct T_func_009e0ef0 { void m(); };
extern T_func_009e0ef0 G1_func_009e0ef0;
void func_009e0ef0()
{
    G1_func_009e0ef0.m();
}
