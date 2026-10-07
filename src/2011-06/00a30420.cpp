// roc 2011-06 00a30420  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30420
//
// 00a30420  b9901dcb00           mov ecx, 0xcb1d90
// 00a30425  e916d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a30420 { void m(); };
extern T_func_00a30420 G1_func_00a30420;
void func_00a30420()
{
    G1_func_00a30420.m();
}
