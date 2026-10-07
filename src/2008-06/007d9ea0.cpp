// roc 2008-06 007d9ea0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9ea0
//
// 007d9ea0  b970c89700           mov ecx, 0x97c870
// 007d9ea5  e9a6fac2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9ea0 { void m(); };
extern T_func_007d9ea0 G1_func_007d9ea0;
void func_007d9ea0()
{
    G1_func_007d9ea0.m();
}
