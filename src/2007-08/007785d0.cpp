// roc 2007-08 007785d0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007785d0
//
// 007785d0  b9b0e28b00           mov ecx, 0x8be2b0
// 007785d5  e996fec9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_007785d0 { void m(); };
extern T_func_007785d0 G1_func_007785d0;
void func_007785d0()
{
    G1_func_007785d0.m();
}
