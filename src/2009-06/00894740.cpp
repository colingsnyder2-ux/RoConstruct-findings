// roc 2009-06 00894740  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894740
//
// 00894740  b940aba300           mov ecx, 0xa3ab40
// 00894745  e946d0baff           jmp 0x441790
// auto-matched from its assembly shape

struct T_func_00894740 { void m(); };
extern T_func_00894740 G1_func_00894740;
void func_00894740()
{
    G1_func_00894740.m();
}
