// roc 2009-06 00899740  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899740
//
// 00899740  b980aca400           mov ecx, 0xa4ac80
// 00899745  e9c660d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899740 { void m(); };
extern T_func_00899740 G1_func_00899740;
void func_00899740()
{
    G1_func_00899740.m();
}
