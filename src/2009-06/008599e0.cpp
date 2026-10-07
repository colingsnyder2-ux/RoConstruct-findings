// roc 2009-06 008599e0  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008599e0
//
// 008599e0  b938d9a300           mov ecx, 0xa3d938
// 008599e5  e9669dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008599e0 { void m(); };
extern T_func_008599e0 G1_func_008599e0;
void func_008599e0()
{
    G1_func_008599e0.m();
}
