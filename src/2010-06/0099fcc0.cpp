// roc 2010-06 0099fcc0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fcc0
//
// 0099fcc0  b958d5c100           mov ecx, 0xc1d558
// 0099fcc5  e9f634b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fcc0 { void m(); };
extern T_func_0099fcc0 G1_func_0099fcc0;
void func_0099fcc0()
{
    G1_func_0099fcc0.m();
}
