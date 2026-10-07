// roc 2010-06 0099fce0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fce0
//
// 0099fce0  b9e0d4c100           mov ecx, 0xc1d4e0
// 0099fce5  e9d634b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fce0 { void m(); };
extern T_func_0099fce0 G1_func_0099fce0;
void func_0099fce0()
{
    G1_func_0099fce0.m();
}
