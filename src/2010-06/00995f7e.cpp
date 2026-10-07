// roc 2010-06 00995f7e  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00995f7e
//
// 00995f7e  b9b465c000           mov ecx, 0xc065b4
// 00995f83  e9d8a7daff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00995f7e { void m(); };
extern T_func_00995f7e G1_func_00995f7e;
void func_00995f7e()
{
    G1_func_00995f7e.m();
}
