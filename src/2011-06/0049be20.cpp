// roc 2011-06 0049be20  unit: VCWorkspace::?$CComObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049be20
//
// 0049be20  b805400080           mov eax, 0x80004005
// 0049be25  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_0049be20 {

    unsigned int f(int a1, int a2);
};
unsigned int S_func_0049be20::f(int a1, int a2)
{
    return 0x80004005u;
}
