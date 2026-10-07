// roc 2010-06 009a5b40  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a5b40
//
// 009a5b40  b94811c200           mov ecx, 0xc21148
// 009a5b45  e976d6afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a5b40 { void m(); };
extern T_func_009a5b40 G1_func_009a5b40;
void func_009a5b40()
{
    G1_func_009a5b40.m();
}
