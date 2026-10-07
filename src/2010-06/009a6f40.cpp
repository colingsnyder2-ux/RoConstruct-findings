// roc 2010-06 009a6f40  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6f40
//
// 009a6f40  b9101fc200           mov ecx, 0xc21f10
// 009a6f45  e976c2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6f40 { void m(); };
extern T_func_009a6f40 G1_func_009a6f40;
void func_009a6f40()
{
    G1_func_009a6f40.m();
}
