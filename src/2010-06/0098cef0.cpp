// roc 2010-06 0098cef0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098cef0
//
// 0098cef0  b90068c000           mov ecx, 0xc06800
// 0098cef5  e9c662b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098cef0 { void m(); };
extern T_func_0098cef0 G1_func_0098cef0;
void func_0098cef0()
{
    G1_func_0098cef0.m();
}
