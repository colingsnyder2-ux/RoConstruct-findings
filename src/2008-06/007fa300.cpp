// roc 2008-06 007fa300  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa300
//
// 007fa300  b9a0c39600           mov ecx, 0x96c3a0
// 007fa305  e9b608c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa300 { void m(); };
extern T_func_007fa300 G1_func_007fa300;
void func_007fa300()
{
    G1_func_007fa300.m();
}
