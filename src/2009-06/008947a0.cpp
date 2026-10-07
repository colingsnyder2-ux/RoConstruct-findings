// roc 2009-06 008947a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008947a0
//
// 008947a0  b9a0a5a300           mov ecx, 0xa3a5a0
// 008947a5  e926c6baff           jmp 0x440dd0
// auto-matched from its assembly shape

struct T_func_008947a0 { void m(); };
extern T_func_008947a0 G1_func_008947a0;
void func_008947a0()
{
    G1_func_008947a0.m();
}
