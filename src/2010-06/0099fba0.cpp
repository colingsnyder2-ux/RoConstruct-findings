// roc 2010-06 0099fba0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fba0
//
// 0099fba0  b970d1c100           mov ecx, 0xc1d170
// 0099fba5  e91636b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fba0 { void m(); };
extern T_func_0099fba0 G1_func_0099fba0;
void func_0099fba0()
{
    G1_func_0099fba0.m();
}
