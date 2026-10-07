// roc 2008-06 0078c5a0  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c5a0
//
// 0078c5a0  b805400080           mov eax, 0x80004005
// 0078c5a5  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0078c5a0 {

    unsigned int f(int a1);
};
unsigned int S_func_0078c5a0::f(int a1)
{
    return 0x80004005u;
}
