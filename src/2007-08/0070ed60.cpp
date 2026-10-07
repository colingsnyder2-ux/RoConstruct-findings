// roc 2007-08 0070ed60  unit: CXTPRichRender::XTextHost  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ed60
//
// 0070ed60  33c0                 xor eax, eax
// 0070ed62  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_0070ed60 {

    int f(int a1, int a2, int a3);
};
int S_func_0070ed60::f(int a1, int a2, int a3)
{
    return 0;
}
