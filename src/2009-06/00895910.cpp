// roc 2009-06 00895910  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895910
//
// 00895910  b988e6a300           mov ecx, 0xa3e688
// 00895915  e9f649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895910 { void m(); };
extern T_func_00895910 G1_func_00895910;
void func_00895910()
{
    G1_func_00895910.m();
}
