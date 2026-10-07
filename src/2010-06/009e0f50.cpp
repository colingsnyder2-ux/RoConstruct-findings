// roc 2010-06 009e0f50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f50
//
// 009e0f50  b95074c100           mov ecx, 0xc17450
// 009e0f55  e986f3bcff           jmp 0x5b02e0
// auto-matched from its assembly shape

struct T_func_009e0f50 { void m(); };
extern T_func_009e0f50 G1_func_009e0f50;
void func_009e0f50()
{
    G1_func_009e0f50.m();
}
