// roc 2009-06 00899800  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899800
//
// 00899800  b938aca400           mov ecx, 0xa4ac38
// 00899805  e90660d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899800 { void m(); };
extern T_func_00899800 G1_func_00899800;
void func_00899800()
{
    G1_func_00899800.m();
}
