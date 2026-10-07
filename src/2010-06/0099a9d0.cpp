// roc 2010-06 0099a9d0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099a9d0
//
// 0099a9d0  b9409fc100           mov ecx, 0xc19f40
// 0099a9d5  e9e687b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099a9d0 { void m(); };
extern T_func_0099a9d0 G1_func_0099a9d0;
void func_0099a9d0()
{
    G1_func_0099a9d0.m();
}
