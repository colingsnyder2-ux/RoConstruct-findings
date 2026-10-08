// roc 2007-08 006714b0  unit: CXTPAccessible::XAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006714b0
//
// 006714b0  b801400080           mov eax, 0x80004001
// 006714b5  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_006714b0 {

    unsigned int f(int a1, int a2);
};
unsigned int S_func_006714b0::f(int a1, int a2)
{
    return 0x80004001u;
}
