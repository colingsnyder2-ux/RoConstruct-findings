// roc 2009-06 0089bbc0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bbc0
//
// 0089bbc0  b920e2a400           mov ecx, 0xa4e220
// 0089bbc5  e9463cd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089bbc0 { void m(); };
extern T_func_0089bbc0 G1_func_0089bbc0;
void func_0089bbc0()
{
    G1_func_0089bbc0.m();
}
