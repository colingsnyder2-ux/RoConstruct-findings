// roc 2009-06 008959a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008959a0
//
// 008959a0  b930e9a300           mov ecx, 0xa3e930
// 008959a5  e9d6a0c3ff           jmp 0x4cfa80
// auto-matched from its assembly shape

struct T_func_008959a0 { void m(); };
extern T_func_008959a0 G1_func_008959a0;
void func_008959a0()
{
    G1_func_008959a0.m();
}
