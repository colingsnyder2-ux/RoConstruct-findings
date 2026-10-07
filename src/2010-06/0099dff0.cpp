// roc 2010-06 0099dff0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099dff0
//
// 0099dff0  b990c2c100           mov ecx, 0xc1c290
// 0099dff5  e9c651b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099dff0 { void m(); };
extern T_func_0099dff0 G1_func_0099dff0;
void func_0099dff0()
{
    G1_func_0099dff0.m();
}
