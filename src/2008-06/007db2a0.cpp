// roc 2008-06 007db2a0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db2a0
//
// 007db2a0  b9d8d79700           mov ecx, 0x97d7d8
// 007db2a5  e9a6e6c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db2a0 { void m(); };
extern T_func_007db2a0 G1_func_007db2a0;
void func_007db2a0()
{
    G1_func_007db2a0.m();
}
