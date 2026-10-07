// roc 2010-06 009a3690  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3690
//
// 009a3690  b948f1c100           mov ecx, 0xc1f148
// 009a3695  e926fbafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3690 { void m(); };
extern T_func_009a3690 G1_func_009a3690;
void func_009a3690()
{
    G1_func_009a3690.m();
}
