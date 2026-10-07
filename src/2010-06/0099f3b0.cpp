// roc 2010-06 0099f3b0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099f3b0
//
// 0099f3b0  b9e0cec100           mov ecx, 0xc1cee0
// 0099f3b5  e9063eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099f3b0 { void m(); };
extern T_func_0099f3b0 G1_func_0099f3b0;
void func_0099f3b0()
{
    G1_func_0099f3b0.m();
}
