// roc 2008-06 007d12d0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d12d0
//
// 007d12d0  b970549700           mov ecx, 0x975470
// 007d12d5  e97686c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d12d0 { void m(); };
extern T_func_007d12d0 G1_func_007d12d0;
void func_007d12d0()
{
    G1_func_007d12d0.m();
}
