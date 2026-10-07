// roc 2009-06 0089ca00  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca00
//
// 0089ca00  b9b8f3a400           mov ecx, 0xa4f3b8
// 0089ca05  e9062ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089ca00 { void m(); };
extern T_func_0089ca00 G1_func_0089ca00;
void func_0089ca00()
{
    G1_func_0089ca00.m();
}
