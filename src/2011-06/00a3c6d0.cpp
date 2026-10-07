// roc 2011-06 00a3c6d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c6d0
//
// 00a3c6d0  b98406cd00           mov ecx, 0xcd0684
// 00a3c6d5  e936fea6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c6d0 { void m(); };
extern T_func_00a3c6d0 G1_func_00a3c6d0;
void func_00a3c6d0()
{
    G1_func_00a3c6d0.m();
}
