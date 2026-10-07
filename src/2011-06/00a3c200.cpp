// roc 2011-06 00a3c200  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c200
//
// 00a3c200  b9a0fccc00           mov ecx, 0xccfca0
// 00a3c205  e90603a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c200 { void m(); };
extern T_func_00a3c200 G1_func_00a3c200;
void func_00a3c200()
{
    G1_func_00a3c200.m();
}
