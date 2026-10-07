// roc 2009-06 00899570  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899570
//
// 00899570  b938a9a400           mov ecx, 0xa4a938
// 00899575  e99662d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899570 { void m(); };
extern T_func_00899570 G1_func_00899570;
void func_00899570()
{
    G1_func_00899570.m();
}
