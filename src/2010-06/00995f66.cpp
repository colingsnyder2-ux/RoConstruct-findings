// roc 2010-06 00995f66  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00995f66
//
// 00995f66  b9b465c000           mov ecx, 0xc065b4
// 00995f6b  e9f0a7daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00995f66 { void m(); };
extern T_func_00995f66 G1_func_00995f66;
void func_00995f66()
{
    G1_func_00995f66.m();
}
