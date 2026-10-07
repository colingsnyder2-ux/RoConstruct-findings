// roc 2009-06 0086d220  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d220
//
// 0086d220  b964e1a400           mov ecx, 0xa4e164
// 0086d225  e92665c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d220 { void m(); };
extern T_func_0086d220 G1_func_0086d220;
void func_0086d220()
{
    G1_func_0086d220.m();
}
