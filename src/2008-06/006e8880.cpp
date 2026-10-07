// roc 2008-06 006e8880  unit: CXTPAccessible  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8880
//
// 006e8880  b801400080           mov eax, 0x80004001
// 006e8885  c22000               ret 0x20
// auto-matched from its assembly shape

struct S_func_006e8880 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};
unsigned int S_func_006e8880::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0x80004001u;
}
