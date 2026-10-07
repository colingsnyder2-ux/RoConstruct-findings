// roc 2009-06 00895f50  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895f50
//
// 00895f50  b9a8f1a300           mov ecx, 0xa3f1a8
// 00895f55  e9a6bcdbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_00895f50 { void m(); };
extern T_func_00895f50 G1_func_00895f50;
void func_00895f50()
{
    G1_func_00895f50.m();
}
