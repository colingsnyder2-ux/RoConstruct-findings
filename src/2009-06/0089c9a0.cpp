// roc 2009-06 0089c9a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c9a0
//
// 0089c9a0  b928f3a400           mov ecx, 0xa4f328
// 0089c9a5  e9662ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089c9a0 { void m(); };
extern T_func_0089c9a0 G1_func_0089c9a0;
void func_0089c9a0()
{
    G1_func_0089c9a0.m();
}
