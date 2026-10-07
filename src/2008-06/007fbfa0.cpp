// roc 2008-06 007fbfa0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbfa0
//
// 007fbfa0  b928109700           mov ecx, 0x971028
// 007fbfa5  e906decaff           jmp 0x4a9db0
// auto-matched from its assembly shape

struct T_func_007fbfa0 { void m(); };
extern T_func_007fbfa0 G1_func_007fbfa0;
void func_007fbfa0()
{
    G1_func_007fbfa0.m();
}
