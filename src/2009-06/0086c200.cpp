// roc 2009-06 0086c200  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c200
//
// 0086c200  b980cea400           mov ecx, 0xa4ce80
// 0086c205  e94675c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c200 { void m(); };
extern T_func_0086c200 G1_func_0086c200;
void func_0086c200()
{
    G1_func_0086c200.m();
}
