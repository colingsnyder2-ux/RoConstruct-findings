// roc 2007-03 0066ded0  unit: seg_00660000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ded0
//
// 0066ded0  33c0                 xor eax, eax
// 0066ded2  c21400               ret 0x14
// auto-matched from its assembly shape

struct S_func_0066ded0 {

    int f(int a1, int a2, int a3, int a4, int a5);
};
int S_func_0066ded0::f(int a1, int a2, int a3, int a4, int a5)
{
    return 0;
}
