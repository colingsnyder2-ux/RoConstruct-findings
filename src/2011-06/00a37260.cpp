// roc 2011-06 00a37260  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37260
//
// 00a37260  b90876cc00           mov ecx, 0xcc7608
// 00a37265  e9d6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37260 { void m(); };
extern T_func_00a37260 G1_func_00a37260;
void func_00a37260()
{
    G1_func_00a37260.m();
}
