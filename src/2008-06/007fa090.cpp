// roc 2008-06 007fa090  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa090
//
// 007fa090  b93cc29600           mov ecx, 0x96c23c
// 007fa095  e99611e5ff           jmp 0x64b230
// auto-matched from its assembly shape

struct T_func_007fa090 { void m(); };
extern T_func_007fa090 G1_func_007fa090;
void func_007fa090()
{
    G1_func_007fa090.m();
}
