// roc 2011-06 00a3c820  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c820
//
// 00a3c820  b97809cd00           mov ecx, 0xcd0978
// 00a3c825  e99608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c820 { void m(); };
extern T_func_00a3c820 G1_func_00a3c820;
void func_00a3c820()
{
    G1_func_00a3c820.m();
}
