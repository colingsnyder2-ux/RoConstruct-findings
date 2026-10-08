// roc 2007-08 0077bda0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bda0
//
// 0077bda0  b978698c00           mov ecx, 0x8c6978
// 0077bda5  e966b8c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077bda0 { void m(); };
extern T_func_0077bda0 G1_func_0077bda0;
void func_0077bda0()
{
    G1_func_0077bda0.m();
}
