// roc 2007-08 007785c0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007785c0
//
// 007785c0  b998e08b00           mov ecx, 0x8be098
// 007785c5  e9a6fec9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_007785c0 { void m(); };
extern T_func_007785c0 G1_func_007785c0;
void func_007785c0()
{
    G1_func_007785c0.m();
}
