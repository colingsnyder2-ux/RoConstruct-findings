// roc 2009-06 0089d280  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d280
//
// 0089d280  b9d804a500           mov ecx, 0xa504d8
// 0089d285  e9966fb8ff           jmp 0x424220
// auto-matched from its assembly shape

struct T_func_0089d280 { void m(); };
extern T_func_0089d280 G1_func_0089d280;
void func_0089d280()
{
    G1_func_0089d280.m();
}
