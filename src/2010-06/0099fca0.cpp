// roc 2010-06 0099fca0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fca0
//
// 0099fca0  b9d0d1c100           mov ecx, 0xc1d1d0
// 0099fca5  e91635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fca0 { void m(); };
extern T_func_0099fca0 G1_func_0099fca0;
void func_0099fca0()
{
    G1_func_0099fca0.m();
}
