// roc 2008-06 007d57f0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d57f0
//
// 007d57f0  b9189d9700           mov ecx, 0x979d18
// 007d57f5  e95641c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d57f0 { void m(); };
extern T_func_007d57f0 G1_func_007d57f0;
void func_007d57f0()
{
    G1_func_007d57f0.m();
}
