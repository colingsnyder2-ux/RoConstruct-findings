// roc 2009-06 0089d550  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d550
//
// 0089d550  b99026a500           mov ecx, 0xa52690
// 0089d555  e9bcf1faff           jmp 0x84c716
// auto-matched from its assembly shape

struct T_func_0089d550 { void m(); };
extern T_func_0089d550 G1_func_0089d550;
void func_0089d550()
{
    G1_func_0089d550.m();
}
