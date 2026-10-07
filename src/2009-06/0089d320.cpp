// roc 2009-06 0089d320  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d320
//
// 0089d320  b92815a500           mov ecx, 0xa51528
// 0089d325  e92693e7ff           jmp 0x716650
// auto-matched from its assembly shape

struct T_func_0089d320 { void m(); };
extern T_func_0089d320 G1_func_0089d320;
void func_0089d320()
{
    G1_func_0089d320.m();
}
