// roc 2011-06 00a35780  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35780
//
// 00a35780  b9c1dfcb00           mov ecx, 0xcbdfc1
// 00a35785  e956cdb7ff           jmp 0x5b24e0
// auto-matched from its assembly shape

struct T_func_00a35780 { void m(); };
extern T_func_00a35780 G1_func_00a35780;
void func_00a35780()
{
    G1_func_00a35780.m();
}
