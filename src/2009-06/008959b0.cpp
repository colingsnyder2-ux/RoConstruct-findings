// roc 2009-06 008959b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008959b0
//
// 008959b0  b940e8a300           mov ecx, 0xa3e840
// 008959b5  e9269fc3ff           jmp 0x4cf8e0
// auto-matched from its assembly shape

struct T_func_008959b0 { void m(); };
extern T_func_008959b0 G1_func_008959b0;
void func_008959b0()
{
    G1_func_008959b0.m();
}
