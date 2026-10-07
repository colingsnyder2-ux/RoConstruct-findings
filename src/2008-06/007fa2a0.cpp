// roc 2008-06 007fa2a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa2a0
//
// 007fa2a0  b968c49600           mov ecx, 0x96c468
// 007fa2a5  e91609c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa2a0 { void m(); };
extern T_func_007fa2a0 G1_func_007fa2a0;
void func_007fa2a0()
{
    G1_func_007fa2a0.m();
}
