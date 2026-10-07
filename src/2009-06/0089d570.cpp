// roc 2009-06 0089d570  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d570
//
// 0089d570  b99426a500           mov ecx, 0xa52694
// 0089d575  e99cf1faff           jmp 0x84c716
// auto-matched from its assembly shape

struct T_func_0089d570 { void m(); };
extern T_func_0089d570 G1_func_0089d570;
void func_0089d570()
{
    G1_func_0089d570.m();
}
