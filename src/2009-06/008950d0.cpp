// roc 2009-06 008950d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008950d0
//
// 008950d0  b938d5a300           mov ecx, 0xa3d538
// 008950d5  e93652b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008950d0 { void m(); };
extern T_func_008950d0 G1_func_008950d0;
void func_008950d0()
{
    G1_func_008950d0.m();
}
