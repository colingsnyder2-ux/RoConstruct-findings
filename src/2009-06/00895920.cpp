// roc 2009-06 00895920  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895920
//
// 00895920  b9c0e5a300           mov ecx, 0xa3e5c0
// 00895925  e9e649b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00895920 { void m(); };
extern T_func_00895920 G1_func_00895920;
void func_00895920()
{
    G1_func_00895920.m();
}
