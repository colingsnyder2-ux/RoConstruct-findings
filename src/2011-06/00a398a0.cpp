// roc 2011-06 00a398a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a398a0
//
// 00a398a0  b9d0afcc00           mov ecx, 0xccafd0
// 00a398a5  e94645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a398a0 { void m(); };
extern T_func_00a398a0 G1_func_00a398a0;
void func_00a398a0()
{
    G1_func_00a398a0.m();
}
