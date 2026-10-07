// roc 2010-06 0099c8b0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c8b0
//
// 0099c8b0  b900b2c100           mov ecx, 0xc1b200
// 0099c8b5  e90669b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c8b0 { void m(); };
extern T_func_0099c8b0 G1_func_0099c8b0;
void func_0099c8b0()
{
    G1_func_0099c8b0.m();
}
