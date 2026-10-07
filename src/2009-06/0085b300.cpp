// roc 2009-06 0085b300  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085b300
//
// 0085b300  b970eaa300           mov ecx, 0xa3ea70
// 0085b305  e94684c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085b300 { void m(); };
extern T_func_0085b300 G1_func_0085b300;
void func_0085b300()
{
    G1_func_0085b300.m();
}
