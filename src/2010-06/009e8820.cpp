// roc 2010-06 009e8820  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8820
//
// 009e8820  b96825c200           mov ecx, 0xc22568
// 009e8825  e946ddbaff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e8820 { void m(); };
extern T_func_009e8820 G1_func_009e8820;
void func_009e8820()
{
    G1_func_009e8820.m();
}
