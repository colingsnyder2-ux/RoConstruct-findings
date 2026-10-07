// roc 2011-06 008b55e0  unit: CXTPReportInplaceEdit  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b55e0
//
// 008b55e0  b803000000           mov eax, 3
// 008b55e5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_008b55e0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_008b55e0::f(int a1, int a2, int a3)
{
    return 3u;
}
