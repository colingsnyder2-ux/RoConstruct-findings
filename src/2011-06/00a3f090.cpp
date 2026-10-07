// roc 2011-06 00a3f090  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f090
//
// 00a3f090  b94045cd00           mov ecx, 0xcd4540
// 00a3f095  e976d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f090 { void m(); };
extern T_func_00a3f090 G1_func_00a3f090;
void func_00a3f090()
{
    G1_func_00a3f090.m();
}
