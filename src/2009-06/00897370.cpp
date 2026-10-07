// roc 2009-06 00897370  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897370
//
// 00897370  b9783da400           mov ecx, 0xa43d78
// 00897375  e99684d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00897370 { void m(); };
extern T_func_00897370 G1_func_00897370;
void func_00897370()
{
    G1_func_00897370.m();
}
