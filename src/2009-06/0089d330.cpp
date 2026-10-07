// roc 2009-06 0089d330  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d330
//
// 0089d330  b93019a500           mov ecx, 0xa51930
// 0089d335  e9b6d9e7ff           jmp 0x71acf0
// auto-matched from its assembly shape

struct T_func_0089d330 { void m(); };
extern T_func_0089d330 G1_func_0089d330;
void func_0089d330()
{
    G1_func_0089d330.m();
}
