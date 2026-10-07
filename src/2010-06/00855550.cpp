// roc 2010-06 00855550  unit: CXTPReportInplaceEdit  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00855550
//
// 00855550  b803000000           mov eax, 3
// 00855555  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_00855550 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_00855550::f(int a1, int a2, int a3)
{
    return 3u;
}
