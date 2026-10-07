// roc 2008-06 007db3a0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db3a0
//
// 007db3a0  b9a4d79700           mov ecx, 0x97d7a4
// 007db3a5  e9a6e5c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db3a0 { void m(); };
extern T_func_007db3a0 G1_func_007db3a0;
void func_007db3a0()
{
    G1_func_007db3a0.m();
}
