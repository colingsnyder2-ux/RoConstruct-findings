// roc 2009-06 0089d530  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d530
//
// 0089d530  b98023a500           mov ecx, 0xa52380
// 0089d535  e966eaf4ff           jmp 0x7ebfa0
// auto-matched from its assembly shape

struct T_func_0089d530 { void m(); };
extern T_func_0089d530 G1_func_0089d530;
void func_0089d530()
{
    G1_func_0089d530.m();
}
