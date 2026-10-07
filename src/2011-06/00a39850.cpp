// roc 2011-06 00a39850  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39850
//
// 00a39850  b9a0accc00           mov ecx, 0xccaca0
// 00a39855  e9b62ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39850 { void m(); };
extern T_func_00a39850 G1_func_00a39850;
void func_00a39850()
{
    G1_func_00a39850.m();
}
