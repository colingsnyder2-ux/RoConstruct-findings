// roc 2007-03 0067d8f0  unit: seg_00670000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067d8f0
//
// 0067d8f0  b803000000           mov eax, 3
// 0067d8f5  c20c00               ret 0xc
// auto-matched from its assembly shape

struct S_func_0067d8f0 {

    unsigned int f(int a1, int a2, int a3);
};
unsigned int S_func_0067d8f0::f(int a1, int a2, int a3)
{
    return 3u;
}
