// roc 2011-06 00a39dc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39dc0
//
// 00a39dc0  b93cc1cc00           mov ecx, 0xccc13c
// 00a39dc5  e94627a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39dc0 { void m(); };
extern T_func_00a39dc0 G1_func_00a39dc0;
void func_00a39dc0()
{
    G1_func_00a39dc0.m();
}
