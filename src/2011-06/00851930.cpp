// roc 2011-06 00851930  unit: CSourceStream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851930
//
// 00851930  b801400080           mov eax, 0x80004001
// 00851935  c22000               ret 0x20
// auto-matched from its assembly shape

struct S_func_00851930 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};
unsigned int S_func_00851930::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0x80004001u;
}
