// roc 2009-06 00894770  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894770
//
// 00894770  b970a8a300           mov ecx, 0xa3a870
// 00894775  e936cbbaff           jmp 0x4412b0
// auto-matched from its assembly shape

struct T_func_00894770 { void m(); };
extern T_func_00894770 G1_func_00894770;
void func_00894770()
{
    G1_func_00894770.m();
}
