// roc 2009-06 00898910  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898910
//
// 00898910  b93054a400           mov ecx, 0xa45430
// 00898915  e9f619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898910 { void m(); };
extern T_func_00898910 G1_func_00898910;
void func_00898910()
{
    G1_func_00898910.m();
}
