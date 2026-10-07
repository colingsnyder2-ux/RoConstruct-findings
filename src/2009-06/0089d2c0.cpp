// roc 2009-06 0089d2c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d2c0
//
// 0089d2c0  b95008a500           mov ecx, 0xa50850
// 0089d2c5  e9f640e7ff           jmp 0x7113c0
// auto-matched from its assembly shape

struct T_func_0089d2c0 { void m(); };
extern T_func_0089d2c0 G1_func_0089d2c0;
void func_0089d2c0()
{
    G1_func_0089d2c0.m();
}
