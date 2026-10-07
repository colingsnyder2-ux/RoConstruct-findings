// roc 2010-06 00893990  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893990
//
// 00893990  b805400080           mov eax, 0x80004005
// 00893995  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00893990 {

    unsigned int f(int a1);
};
unsigned int S_func_00893990::f(int a1)
{
    return 0x80004005u;
}
