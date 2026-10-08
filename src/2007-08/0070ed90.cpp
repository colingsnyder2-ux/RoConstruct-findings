// roc 2007-08 0070ed90  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ed90
//
// 0070ed90  b805400080           mov eax, 0x80004005
// 0070ed95  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0070ed90 {

    unsigned int f(int a1);
};
unsigned int S_func_0070ed90::f(int a1)
{
    return 0x80004005u;
}
