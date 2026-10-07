// roc 2009-06 0086e700  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e700
//
// 0086e700  b978eaa400           mov ecx, 0xa4ea78
// 0086e705  e94650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e700 { void m(); };
extern T_func_0086e700 G1_func_0086e700;
void func_0086e700()
{
    G1_func_0086e700.m();
}
