// roc 2010-06 0098e360  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098e360
//
// 0098e360  b93c88c000           mov ecx, 0xc0883c
// 0098e365  e94630d8ff           jmp 0x7113b0
// auto-matched from its assembly shape

struct T_func_0098e360 { void m(); };
extern T_func_0098e360 G1_func_0098e360;
void func_0098e360()
{
    G1_func_0098e360.m();
}
