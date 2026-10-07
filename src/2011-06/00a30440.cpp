// roc 2011-06 00a30440  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30440
//
// 00a30440  b9101acb00           mov ecx, 0xcb1a10
// 00a30445  e9f6d69dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a30440 { void m(); };
extern T_func_00a30440 G1_func_00a30440;
void func_00a30440()
{
    G1_func_00a30440.m();
}
