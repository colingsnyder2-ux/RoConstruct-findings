// roc 2010-06 00995f4e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00995f4e
//
// 00995f4e  b9b465c000           mov ecx, 0xc065b4
// 00995f53  e908a8daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00995f4e { void m(); };
extern T_func_00995f4e G1_func_00995f4e;
void func_00995f4e()
{
    G1_func_00995f4e.m();
}
