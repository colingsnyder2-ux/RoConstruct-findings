// roc 2009-06 00866226  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00866226
//
// 00866226  b92ca8a400           mov ecx, 0xa4a82c
// 0086622b  e9209dbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_00866226 { void m(); };
extern T_func_00866226 G1_func_00866226;
void func_00866226()
{
    G1_func_00866226.m();
}
