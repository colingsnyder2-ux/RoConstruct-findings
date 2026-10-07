// roc 2010-06 00991c20  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00991c20
//
// 00991c20  b9d0aec000           mov ecx, 0xc0aed0
// 00991c25  e99615b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00991c20 { void m(); };
extern T_func_00991c20 G1_func_00991c20;
void func_00991c20()
{
    G1_func_00991c20.m();
}
