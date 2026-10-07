// roc 2009-06 007c65c0  unit: CXTPReportInplaceEdit  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c65c0
//
// 007c65c0  b803000000           mov eax, 3
// 007c65c5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_007c65c0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_007c65c0::f(int a1, int a2, int a3)
{
    return 3u;
}
