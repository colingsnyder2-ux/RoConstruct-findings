// roc 2010-06 009e0f80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f80
//
// 009e0f80  b98071c100           mov ecx, 0xc17180
// 009e0f85  e97689bcff           jmp 0x5a9900
// auto-matched from its assembly shape

struct T_func_009e0f80 { void m(); };
extern T_func_009e0f80 G1_func_009e0f80;
void func_009e0f80()
{
    G1_func_009e0f80.m();
}
