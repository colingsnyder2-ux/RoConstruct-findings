// roc 2008-06 007d27a0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d27a0
//
// 007d27a0  b9d4619700           mov ecx, 0x9761d4
// 007d27a5  e9a671c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d27a0 { void m(); };
extern T_func_007d27a0 G1_func_007d27a0;
void func_007d27a0()
{
    G1_func_007d27a0.m();
}
