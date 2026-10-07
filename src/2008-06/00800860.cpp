// roc 2008-06 00800860  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800860
//
// 00800860  b9a0c49700           mov ecx, 0x97c4a0
// 00800865  e956a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800860 { void m(); };
extern T_func_00800860 G1_func_00800860;
void func_00800860()
{
    G1_func_00800860.m();
}
