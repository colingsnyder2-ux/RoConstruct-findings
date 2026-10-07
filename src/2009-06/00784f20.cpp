// roc 2009-06 00784f20  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784f20
//
// 00784f20  b801000000           mov eax, 1
// 00784f25  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00784f20 {

    int f(int a1);
};
int S_func_00784f20::f(int a1)
{
    return 1;
}
