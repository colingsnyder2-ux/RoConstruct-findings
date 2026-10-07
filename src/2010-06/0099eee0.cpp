// roc 2010-06 0099eee0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099eee0
//
// 0099eee0  b910cbc100           mov ecx, 0xc1cb10
// 0099eee5  e9d642b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099eee0 { void m(); };
extern T_func_0099eee0 G1_func_0099eee0;
void func_0099eee0()
{
    G1_func_0099eee0.m();
}
