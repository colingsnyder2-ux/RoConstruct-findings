// roc 2009-06 00895d70  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895d70
//
// 00895d70  b9f0efa300           mov ecx, 0xa3eff0
// 00895d75  e9969ad3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895d70 { void m(); };
extern T_func_00895d70 G1_func_00895d70;
void func_00895d70()
{
    G1_func_00895d70.m();
}
