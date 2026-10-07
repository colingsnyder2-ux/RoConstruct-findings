// roc 2011-06 00a3c1d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c1d0
//
// 00a3c1d0  b9bcfdcc00           mov ecx, 0xccfdbc
// 00a3c1d5  e93603a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c1d0 { void m(); };
extern T_func_00a3c1d0 G1_func_00a3c1d0;
void func_00a3c1d0()
{
    G1_func_00a3c1d0.m();
}
