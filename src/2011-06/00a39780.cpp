// roc 2011-06 00a39780  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39780
//
// 00a39780  b9a0aecc00           mov ecx, 0xccaea0
// 00a39785  e9862da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39780 { void m(); };
extern T_func_00a39780 G1_func_00a39780;
void func_00a39780()
{
    G1_func_00a39780.m();
}
