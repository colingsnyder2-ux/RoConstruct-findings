// roc 2011-06 00a3c940  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c940
//
// 00a3c940  b91009cd00           mov ecx, 0xcd0910
// 00a3c945  e97607a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c940 { void m(); };
extern T_func_00a3c940 G1_func_00a3c940;
void func_00a3c940()
{
    G1_func_00a3c940.m();
}
