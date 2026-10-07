// roc 2011-06 00a3b810  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b810
//
// 00a3b810  b990efcc00           mov ecx, 0xccef90
// 00a3b815  e9364ec4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b810 { void m(); };
extern T_func_00a3b810 G1_func_00a3b810;
void func_00a3b810()
{
    G1_func_00a3b810.m();
}
