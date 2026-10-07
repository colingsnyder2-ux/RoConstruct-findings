// roc 2010-06 009e5270  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5270
//
// 009e5270  b980dcc100           mov ecx, 0xc1dc80
// 009e5275  e9f612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5270 { void m(); };
extern T_func_009e5270 G1_func_009e5270;
void func_009e5270()
{
    G1_func_009e5270.m();
}
