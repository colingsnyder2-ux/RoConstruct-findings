// roc 2009-06 00895f60  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895f60
//
// 00895f60  b900f2a300           mov ecx, 0xa3f200
// 00895f65  e9a698d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895f60 { void m(); };
extern T_func_00895f60 G1_func_00895f60;
void func_00895f60()
{
    G1_func_00895f60.m();
}
