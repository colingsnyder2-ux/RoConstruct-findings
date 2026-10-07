// roc 2009-06 00895a20  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895a20
//
// 00895a20  b988eba300           mov ecx, 0xa3eb88
// 00895a25  e9e69dd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895a20 { void m(); };
extern T_func_00895a20 G1_func_00895a20;
void func_00895a20()
{
    G1_func_00895a20.m();
}
