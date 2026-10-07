// roc 2010-06 0099c8d0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c8d0
//
// 0099c8d0  b968b3c100           mov ecx, 0xc1b368
// 0099c8d5  e9e668b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c8d0 { void m(); };
extern T_func_0099c8d0 G1_func_0099c8d0;
void func_0099c8d0()
{
    G1_func_0099c8d0.m();
}
