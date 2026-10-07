// roc 2011-06 00a37810  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37810
//
// 00a37810  b94029cc00           mov ecx, 0xcc2940
// 00a37815  e926639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37810 { void m(); };
extern T_func_00a37810 G1_func_00a37810;
void func_00a37810()
{
    G1_func_00a37810.m();
}
