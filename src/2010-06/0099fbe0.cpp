// roc 2010-06 0099fbe0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fbe0
//
// 0099fbe0  b900dac100           mov ecx, 0xc1da00
// 0099fbe5  e9d635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fbe0 { void m(); };
extern T_func_0099fbe0 G1_func_0099fbe0;
void func_0099fbe0()
{
    G1_func_0099fbe0.m();
}
