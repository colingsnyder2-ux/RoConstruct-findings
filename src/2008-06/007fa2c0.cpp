// roc 2008-06 007fa2c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa2c0
//
// 007fa2c0  b9f8c99600           mov ecx, 0x96c9f8
// 007fa2c5  e9f608c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa2c0 { void m(); };
extern T_func_007fa2c0 G1_func_007fa2c0;
void func_007fa2c0()
{
    G1_func_007fa2c0.m();
}
