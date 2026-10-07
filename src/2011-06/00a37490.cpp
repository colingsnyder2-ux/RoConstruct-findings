// roc 2011-06 00a37490  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37490
//
// 00a37490  b98058cc00           mov ecx, 0xcc5880
// 00a37495  e9a6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37490 { void m(); };
extern T_func_00a37490 G1_func_00a37490;
void func_00a37490()
{
    G1_func_00a37490.m();
}
