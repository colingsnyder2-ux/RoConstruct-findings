// roc 2011-06 00a32620  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32620
//
// 00a32620  b96063cb00           mov ecx, 0xcb6360
// 00a32625  e9c6b7beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a32620 { void m(); };
extern T_func_00a32620 G1_func_00a32620;
void func_00a32620()
{
    G1_func_00a32620.m();
}
