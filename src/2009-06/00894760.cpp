// roc 2009-06 00894760  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894760
//
// 00894760  b960a9a300           mov ecx, 0xa3a960
// 00894765  e9e6ccbaff           jmp 0x441450
// auto-matched from its assembly shape

struct T_func_00894760 { void m(); };
extern T_func_00894760 G1_func_00894760;
void func_00894760()
{
    G1_func_00894760.m();
}
