// roc 2010-06 0099ede0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ede0
//
// 0099ede0  b908c9c100           mov ecx, 0xc1c908
// 0099ede5  e9d643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ede0 { void m(); };
extern T_func_0099ede0 G1_func_0099ede0;
void func_0099ede0()
{
    G1_func_0099ede0.m();
}
