// roc 2009-06 00895f70  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895f70
//
// 00895f70  b958f1a300           mov ecx, 0xa3f158
// 00895f75  e99698d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895f70 { void m(); };
extern T_func_00895f70 G1_func_00895f70;
void func_00895f70()
{
    G1_func_00895f70.m();
}
