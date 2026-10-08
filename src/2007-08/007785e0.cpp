// roc 2007-08 007785e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007785e0
//
// 007785e0  b950e28b00           mov ecx, 0x8be250
// 007785e5  e926f0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007785e0 { void m(); };
extern T_func_007785e0 G1_func_007785e0;
void func_007785e0()
{
    G1_func_007785e0.m();
}
