// roc 2008-06 007fde90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde90
//
// 007fde90  b9a0639700           mov ecx, 0x9763a0
// 007fde95  e956e3d9ff           jmp 0x59c1f0
// auto-matched from its assembly shape

struct T_func_007fde90 { void m(); };
extern T_func_007fde90 G1_func_007fde90;
void func_007fde90()
{
    G1_func_007fde90.m();
}
