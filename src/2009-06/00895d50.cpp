// roc 2009-06 00895d50  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895d50
//
// 00895d50  b9a0eea300           mov ecx, 0xa3eea0
// 00895d55  e9b645b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895d50 { void m(); };
extern T_func_00895d50 G1_func_00895d50;
void func_00895d50()
{
    G1_func_00895d50.m();
}
