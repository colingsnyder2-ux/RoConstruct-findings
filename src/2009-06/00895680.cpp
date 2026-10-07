// roc 2009-06 00895680  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895680
//
// 00895680  b9b8dea300           mov ecx, 0xa3deb8
// 00895685  e986a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895680 { void m(); };
extern T_func_00895680 G1_func_00895680;
void func_00895680()
{
    G1_func_00895680.m();
}
