// roc 2010-06 009a3f30  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3f30
//
// 009a3f30  b9a4fcc100           mov ecx, 0xc1fca4
// 009a3f35  e986f2afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3f30 { void m(); };
extern T_func_009a3f30 G1_func_009a3f30;
void func_009a3f30()
{
    G1_func_009a3f30.m();
}
