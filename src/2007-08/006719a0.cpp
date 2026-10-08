// roc 2007-08 006719a0  unit: CPropertyGridItemBrickColor  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006719a0
//
// 006719a0  b801400080           mov eax, 0x80004001
// 006719a5  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006719a0 {

    unsigned int f(int a1);
};
unsigned int S_func_006719a0::f(int a1)
{
    return 0x80004001u;
}
