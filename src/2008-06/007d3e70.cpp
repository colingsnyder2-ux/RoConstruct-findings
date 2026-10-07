// roc 2008-06 007d3e70  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d3e70
//
// 007d3e70  b9a0709700           mov ecx, 0x9770a0
// 007d3e75  e9d65ac3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d3e70 { void m(); };
extern T_func_007d3e70 G1_func_007d3e70;
void func_007d3e70()
{
    G1_func_007d3e70.m();
}
