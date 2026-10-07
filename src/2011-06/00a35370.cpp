// roc 2011-06 00a35370  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35370
//
// 00a35370  b950d0cb00           mov ecx, 0xcbd050
// 00a35375  e9c6879dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a35370 { void m(); };
extern T_func_00a35370 G1_func_00a35370;
void func_00a35370()
{
    G1_func_00a35370.m();
}
