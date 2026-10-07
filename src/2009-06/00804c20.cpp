// roc 2009-06 00804c20  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804c20
//
// 00804c20  b805400080           mov eax, 0x80004005
// 00804c25  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00804c20 {

    unsigned int f(int a1);
};
unsigned int S_func_00804c20::f(int a1)
{
    return 0x80004005u;
}
