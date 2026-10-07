// roc 2010-06 0099fc20  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fc20
//
// 0099fc20  b900d6c100           mov ecx, 0xc1d600
// 0099fc25  e99635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fc20 { void m(); };
extern T_func_0099fc20 G1_func_0099fc20;
void func_0099fc20()
{
    G1_func_0099fc20.m();
}
