// roc 2007-03 006968b0  unit: seg_00690000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006968b0
//
// 006968b0  33c0                 xor eax, eax
// 006968b2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006968b0 {

    int f(int a1);
};
int S_func_006968b0::f(int a1)
{
    return 0;
}
