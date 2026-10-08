// roc 2007-03 006f1e20  unit: seg_006f0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1e20
//
// 006f1e20  33c0                 xor eax, eax
// 006f1e22  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_006f1e20 {

    int f(int a1, int a2, int a3);
};
int S_func_006f1e20::f(int a1, int a2, int a3)
{
    return 0;
}
