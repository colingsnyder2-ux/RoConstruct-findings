// roc 2008-06 007db2c0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007db2c0
//
// 007db2c0  b978d69700           mov ecx, 0x97d678
// 007db2c5  e986e6c2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007db2c0 { void m(); };
extern T_func_007db2c0 G1_func_007db2c0;
void func_007db2c0()
{
    G1_func_007db2c0.m();
}
