// roc 2011-06 00a30410  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30410
//
// 00a30410  b9701ecb00           mov ecx, 0xcb1e70
// 00a30415  e926d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a30410 { void m(); };
extern T_func_00a30410 G1_func_00a30410;
void func_00a30410()
{
    G1_func_00a30410.m();
}
