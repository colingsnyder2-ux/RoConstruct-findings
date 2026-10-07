// roc 2009-06 00896630  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896630
//
// 00896630  b98818a400           mov ecx, 0xa41888
// 00896635  e9668dc8ff           jmp 0x51f3a0
// auto-matched from its assembly shape

struct T_func_00896630 { void m(); };
extern T_func_00896630 G1_func_00896630;
void func_00896630()
{
    G1_func_00896630.m();
}
