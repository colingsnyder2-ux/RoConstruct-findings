// roc 2011-06 00a3b960  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b960
//
// 00a3b960  b9b8f1cc00           mov ecx, 0xccf1b8
// 00a3b965  e9a60ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b960 { void m(); };
extern T_func_00a3b960 G1_func_00a3b960;
void func_00a3b960()
{
    G1_func_00a3b960.m();
}
