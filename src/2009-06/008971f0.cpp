// roc 2009-06 008971f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008971f0
//
// 008971f0  b9d033a400           mov ecx, 0xa433d0
// 008971f5  e90635d3ff           jmp 0x5ca700
// auto-matched from its assembly shape

struct T_func_008971f0 { void m(); };
extern T_func_008971f0 G1_func_008971f0;
void func_008971f0()
{
    G1_func_008971f0.m();
}
