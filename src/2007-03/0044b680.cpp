// roc 2007-03 0044b680  unit: seg_00440000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b680
//
// 0044b680  33c0                 xor eax, eax
// 0044b682  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_0044b680 {

    int f(int a1, int a2);
};
int S_func_0044b680::f(int a1, int a2)
{
    return 0;
}
