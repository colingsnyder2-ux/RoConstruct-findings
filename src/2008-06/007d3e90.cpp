// roc 2008-06 007d3e90  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d3e90
//
// 007d3e90  b9d06f9700           mov ecx, 0x976fd0
// 007d3e95  e9b65ac3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d3e90 { void m(); };
extern T_func_007d3e90 G1_func_007d3e90;
void func_007d3e90()
{
    G1_func_007d3e90.m();
}
