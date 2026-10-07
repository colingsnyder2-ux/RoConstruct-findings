// roc 2011-06 00a34f30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f30
//
// 00a34f30  b9b8bfcb00           mov ecx, 0xcbbfb8
// 00a34f35  e9d675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34f30 { void m(); };
extern T_func_00a34f30 G1_func_00a34f30;
void func_00a34f30()
{
    G1_func_00a34f30.m();
}
