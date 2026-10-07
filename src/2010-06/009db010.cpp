// roc 2010-06 009db010  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db010
//
// 009db010  b93008c000           mov ecx, 0xc00830
// 009db015  e9369fa4ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009db010 { void m(); };
extern T_func_009db010 G1_func_009db010;
void func_009db010()
{
    G1_func_009db010.m();
}
