// roc 2007-08 0070ed40  unit: CXTPRichRender::XTextHost  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ed40
//
// 0070ed40  33c0                 xor eax, eax
// 0070ed42  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_0070ed40 {

    int f(int a1, int a2);
};
int S_func_0070ed40::f(int a1, int a2)
{
    return 0;
}
