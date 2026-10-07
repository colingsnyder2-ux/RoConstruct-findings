// roc 2008-06 007da4f0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007da4f0
//
// 007da4f0  b990d49700           mov ecx, 0x97d490
// 007da4f5  e956f4c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007da4f0 { void m(); };
extern T_func_007da4f0 G1_func_007da4f0;
void func_007da4f0()
{
    G1_func_007da4f0.m();
}
