// roc 2009-06 00896060  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896060
//
// 00896060  b9a0f3a300           mov ecx, 0xa3f3a0
// 00896065  e9a697d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00896060 { void m(); };
extern T_func_00896060 G1_func_00896060;
void func_00896060()
{
    G1_func_00896060.m();
}
