// roc 2008-06 006ee5b0  unit: CXTPPopupBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee5b0
//
// 006ee5b0  b803000000           mov eax, 3
// 006ee5b5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_006ee5b0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_006ee5b0::f(int a1, int a2, int a3)
{
    return 3u;
}
