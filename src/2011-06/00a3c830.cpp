// roc 2011-06 00a3c830  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c830
//
// 00a3c830  b9300dcd00           mov ecx, 0xcd0d30
// 00a3c835  e98608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c830 { void m(); };
extern T_func_00a3c830 G1_func_00a3c830;
void func_00a3c830()
{
    G1_func_00a3c830.m();
}
