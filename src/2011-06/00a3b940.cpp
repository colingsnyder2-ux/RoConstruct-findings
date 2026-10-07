// roc 2011-06 00a3b940  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b940
//
// 00a3b940  b9e8f1cc00           mov ecx, 0xccf1e8
// 00a3b945  e97617a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b940 { void m(); };
extern T_func_00a3b940 G1_func_00a3b940;
void func_00a3b940()
{
    G1_func_00a3b940.m();
}
