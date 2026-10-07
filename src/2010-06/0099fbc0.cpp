// roc 2010-06 0099fbc0  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fbc0
//
// 0099fbc0  b940d6c100           mov ecx, 0xc1d640
// 0099fbc5  e9f635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fbc0 { void m(); };
extern T_func_0099fbc0 G1_func_0099fbc0;
void func_0099fbc0()
{
    G1_func_0099fbc0.m();
}
