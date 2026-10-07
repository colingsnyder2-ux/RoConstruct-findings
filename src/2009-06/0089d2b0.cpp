// roc 2009-06 0089d2b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d2b0
//
// 0089d2b0  b96805a500           mov ecx, 0xa50568
// 0089d2b5  e986e7e6ff           jmp 0x70ba40
// auto-matched from its assembly shape

struct T_func_0089d2b0 { void m(); };
extern T_func_0089d2b0 G1_func_0089d2b0;
void func_0089d2b0()
{
    G1_func_0089d2b0.m();
}
