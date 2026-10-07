// roc 2009-06 0086ac40  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086ac40
//
// 0086ac40  b9f8bca400           mov ecx, 0xa4bcf8
// 0086ac45  e9068bc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086ac40 { void m(); };
extern T_func_0086ac40 G1_func_0086ac40;
void func_0086ac40()
{
    G1_func_0086ac40.m();
}
