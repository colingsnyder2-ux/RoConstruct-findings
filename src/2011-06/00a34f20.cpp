// roc 2011-06 00a34f20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f20
//
// 00a34f20  b9b0bdcb00           mov ecx, 0xcbbdb0
// 00a34f25  e9e675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34f20 { void m(); };
extern T_func_00a34f20 G1_func_00a34f20;
void func_00a34f20()
{
    G1_func_00a34f20.m();
}
