// roc 2010-06 009e2740  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2740
//
// 009e2740  b9b895c100           mov ecx, 0xc195b8
// 009e2745  e9263ebbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2740 { void m(); };
extern T_func_009e2740 G1_func_009e2740;
void func_009e2740()
{
    G1_func_009e2740.m();
}
