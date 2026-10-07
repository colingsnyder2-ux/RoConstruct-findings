// roc 2011-06 00a37470  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37470
//
// 00a37470  b9305acc00           mov ecx, 0xcc5a30
// 00a37475  e9c6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37470 { void m(); };
extern T_func_00a37470 G1_func_00a37470;
void func_00a37470()
{
    G1_func_00a37470.m();
}
