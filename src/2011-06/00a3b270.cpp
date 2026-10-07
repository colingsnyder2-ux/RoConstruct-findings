// roc 2011-06 00a3b270  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b270
//
// 00a3b270  b9f8e1cc00           mov ecx, 0xcce1f8
// 00a3b275  e99612a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b270 { void m(); };
extern T_func_00a3b270 G1_func_00a3b270;
void func_00a3b270()
{
    G1_func_00a3b270.m();
}
