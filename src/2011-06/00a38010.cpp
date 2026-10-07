// roc 2011-06 00a38010  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a38010
//
// 00a38010  b97881cc00           mov ecx, 0xcc8178
// 00a38015  e9a69db8ff           jmp 0x5c1dc0
// auto-matched from its assembly shape

struct T_func_00a38010 { void m(); };
extern T_func_00a38010 G1_func_00a38010;
void func_00a38010()
{
    G1_func_00a38010.m();
}
