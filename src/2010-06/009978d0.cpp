// roc 2010-06 009978d0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009978d0
//
// 009978d0  b9408cc100           mov ecx, 0xc18c40
// 009978d5  e9e6b8b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009978d0 { void m(); };
extern T_func_009978d0 G1_func_009978d0;
void func_009978d0()
{
    G1_func_009978d0.m();
}
