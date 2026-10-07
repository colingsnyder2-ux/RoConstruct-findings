// roc 2009-06 00863100  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00863100
//
// 00863100  b9f042a400           mov ecx, 0xa442f0
// 00863105  e94606c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00863100 { void m(); };
extern T_func_00863100 G1_func_00863100;
void func_00863100()
{
    G1_func_00863100.m();
}
