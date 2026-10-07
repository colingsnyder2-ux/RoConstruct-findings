// roc 2011-06 00a3cd30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cd30
//
// 00a3cd30  b9f810cd00           mov ecx, 0xcd10f8
// 00a3cd35  e9d6f7a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3cd30 { void m(); };
extern T_func_00a3cd30 G1_func_00a3cd30;
void func_00a3cd30()
{
    G1_func_00a3cd30.m();
}
