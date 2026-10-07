// roc 2011-06 00a3f280  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f280
//
// 00a3f280  b9484ccd00           mov ecx, 0xcd4c48
// 00a3f285  e966ebbdff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3f280 { void m(); };
extern T_func_00a3f280 G1_func_00a3f280;
void func_00a3f280()
{
    G1_func_00a3f280.m();
}
