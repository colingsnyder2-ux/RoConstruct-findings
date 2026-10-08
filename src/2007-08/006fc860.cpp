// roc 2007-08 006fc860  unit: CXTPPropertyGridInplaceList  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fc860
//
// 006fc860  b803000000           mov eax, 3
// 006fc865  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_006fc860 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_006fc860::f(int a1, int a2, int a3)
{
    return 3u;
}
