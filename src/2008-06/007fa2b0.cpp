// roc 2008-06 007fa2b0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa2b0
//
// 007fa2b0  b9c8ca9600           mov ecx, 0x96cac8
// 007fa2b5  e90609c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa2b0 { void m(); };
extern T_func_007fa2b0 G1_func_007fa2b0;
void func_007fa2b0()
{
    G1_func_007fa2b0.m();
}
