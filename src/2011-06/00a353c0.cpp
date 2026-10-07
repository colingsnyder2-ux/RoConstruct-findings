// roc 2011-06 00a353c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a353c0
//
// 00a353c0  b908cfcb00           mov ecx, 0xcbcf08
// 00a353c5  e94671a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a353c0 { void m(); };
extern T_func_00a353c0 G1_func_00a353c0;
void func_00a353c0()
{
    G1_func_00a353c0.m();
}
