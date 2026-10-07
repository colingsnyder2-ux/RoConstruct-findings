// roc 2009-06 0086f960  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f960
//
// 0086f960  b9acf8a400           mov ecx, 0xa4f8ac
// 0086f965  e9e63dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f960 { void m(); };
extern T_func_0086f960 G1_func_0086f960;
void func_0086f960()
{
    G1_func_0086f960.m();
}
