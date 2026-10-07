// roc 2010-06 0099eea0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099eea0
//
// 0099eea0  b9a8cac100           mov ecx, 0xc1caa8
// 0099eea5  e91643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099eea0 { void m(); };
extern T_func_0099eea0 G1_func_0099eea0;
void func_0099eea0()
{
    G1_func_0099eea0.m();
}
