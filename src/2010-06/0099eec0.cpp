// roc 2010-06 0099eec0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099eec0
//
// 0099eec0  b9a0c7c100           mov ecx, 0xc1c7a0
// 0099eec5  e9f642b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099eec0 { void m(); };
extern T_func_0099eec0 G1_func_0099eec0;
void func_0099eec0()
{
    G1_func_0099eec0.m();
}
