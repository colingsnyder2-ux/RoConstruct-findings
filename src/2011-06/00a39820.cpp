// roc 2011-06 00a39820  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39820
//
// 00a39820  b968b1cc00           mov ecx, 0xccb168
// 00a39825  e9c645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39820 { void m(); };
extern T_func_00a39820 G1_func_00a39820;
void func_00a39820()
{
    G1_func_00a39820.m();
}
