// roc 2011-06 00a3e550  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e550
//
// 00a3e550  b97036cd00           mov ecx, 0xcd3670
// 00a3e555  e9b6dfa6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e550 { void m(); };
extern T_func_00a3e550 G1_func_00a3e550;
void func_00a3e550()
{
    G1_func_00a3e550.m();
}
