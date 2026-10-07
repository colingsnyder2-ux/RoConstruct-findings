// roc 2009-06 0089d4b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d4b0
//
// 0089d4b0  b9a01aa500           mov ecx, 0xa51aa0
// 0089d4b5  e9fac0e7ff           jmp 0x7195b4
// auto-matched from its assembly shape

struct T_func_0089d4b0 { void m(); };
extern T_func_0089d4b0 G1_func_0089d4b0;
void func_0089d4b0()
{
    G1_func_0089d4b0.m();
}
