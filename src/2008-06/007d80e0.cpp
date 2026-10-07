// roc 2008-06 007d80e0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d80e0
//
// 007d80e0  b918b89700           mov ecx, 0x97b818
// 007d80e5  e96618c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d80e0 { void m(); };
extern T_func_007d80e0 G1_func_007d80e0;
void func_007d80e0()
{
    G1_func_007d80e0.m();
}
