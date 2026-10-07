// roc 2010-06 0099c2f0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c2f0
//
// 0099c2f0  b950afc100           mov ecx, 0xc1af50
// 0099c2f5  e9c66eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c2f0 { void m(); };
extern T_func_0099c2f0 G1_func_0099c2f0;
void func_0099c2f0()
{
    G1_func_0099c2f0.m();
}
