// roc 2010-06 009dde50  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dde50
//
// 009dde50  b92889c000           mov ecx, 0xc08928
// 009dde55  e946b1b4ff           jmp 0x528fa0
// auto-matched from its assembly shape

struct T_func_009dde50 { void m(); };
extern T_func_009dde50 G1_func_009dde50;
void func_009dde50()
{
    G1_func_009dde50.m();
}
