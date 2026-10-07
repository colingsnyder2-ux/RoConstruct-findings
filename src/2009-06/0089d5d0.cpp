// roc 2009-06 0089d5d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5d0
//
// 0089d5d0  b9d02aa500           mov ecx, 0xa52ad0
// 0089d5d5  e9a68ff6ff           jmp 0x806580
// auto-matched from its assembly shape

struct T_func_0089d5d0 { void m(); };
extern T_func_0089d5d0 G1_func_0089d5d0;
void func_0089d5d0()
{
    G1_func_0089d5d0.m();
}
