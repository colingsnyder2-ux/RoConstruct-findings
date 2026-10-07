// roc 2011-06 008ec540  unit: CXTPRichRender::XTextHost  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec540
//
// 008ec540  b805400080           mov eax, 0x80004005
// 008ec545  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_008ec540 {

    unsigned int f(int a1);
};
unsigned int S_func_008ec540::f(int a1)
{
    return 0x80004005u;
}
