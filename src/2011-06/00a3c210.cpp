// roc 2011-06 00a3c210  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c210
//
// 00a3c210  b998fbcc00           mov ecx, 0xccfb98
// 00a3c215  e9f602a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c210 { void m(); };
extern T_func_00a3c210 G1_func_00a3c210;
void func_00a3c210()
{
    G1_func_00a3c210.m();
}
