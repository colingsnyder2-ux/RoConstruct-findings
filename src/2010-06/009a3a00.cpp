// roc 2010-06 009a3a00  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3a00
//
// 009a3a00  b900f5c100           mov ecx, 0xc1f500
// 009a3a05  e9b6f7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3a00 { void m(); };
extern T_func_009a3a00 G1_func_009a3a00;
void func_009a3a00()
{
    G1_func_009a3a00.m();
}
