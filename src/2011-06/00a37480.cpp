// roc 2011-06 00a37480  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37480
//
// 00a37480  b95859cc00           mov ecx, 0xcc5958
// 00a37485  e9b6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37480 { void m(); };
extern T_func_00a37480 G1_func_00a37480;
void func_00a37480()
{
    G1_func_00a37480.m();
}
