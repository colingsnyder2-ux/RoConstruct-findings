// roc 2011-06 00a31620  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31620
//
// 00a31620  b9c02dcb00           mov ecx, 0xcb2dc0
// 00a31625  e94616a2ff           jmp 0x452c70
// auto-matched from its assembly shape

struct T_func_00a31620 { void m(); };
extern T_func_00a31620 G1_func_00a31620;
void func_00a31620()
{
    G1_func_00a31620.m();
}
