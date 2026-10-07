// roc 2010-06 009a36b0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a36b0
//
// 009a36b0  b978f3c100           mov ecx, 0xc1f378
// 009a36b5  e906fbafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a36b0 { void m(); };
extern T_func_009a36b0 G1_func_009a36b0;
void func_009a36b0()
{
    G1_func_009a36b0.m();
}
