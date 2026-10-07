// roc 2010-06 00982030  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00982030
//
// 00982030  b94c1cc000           mov ecx, 0xc01c4c
// 00982035  e926e7dbff           jmp 0x740760
// auto-matched from its assembly shape

struct T_func_00982030 { void m(); };
extern T_func_00982030 G1_func_00982030;
void func_00982030()
{
    G1_func_00982030.m();
}
