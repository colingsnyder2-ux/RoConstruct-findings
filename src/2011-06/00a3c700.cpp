// roc 2011-06 00a3c700  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c700
//
// 00a3c700  b92005cd00           mov ecx, 0xcd0520
// 00a3c705  e906fea6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c700 { void m(); };
extern T_func_00a3c700 G1_func_00a3c700;
void func_00a3c700()
{
    G1_func_00a3c700.m();
}
