// roc 2009-06 0089d520  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d520
//
// 0089d520  b92822a500           mov ecx, 0xa52228
// 0089d525  e926b8eeff           jmp 0x788d50
// auto-matched from its assembly shape

struct T_func_0089d520 { void m(); };
extern T_func_0089d520 G1_func_0089d520;
void func_0089d520()
{
    G1_func_0089d520.m();
}
