// roc 2007-03 0044b690  unit: seg_00440000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b690
//
// 0044b690  33c0                 xor eax, eax
// 0044b692  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_0044b690 {

    int f(int a1, int a2, int a3, int a4);
};
int S_func_0044b690::f(int a1, int a2, int a3, int a4)
{
    return 0;
}
