// roc 2007-03 00686560  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686560
//
// 00686560  b801400080           mov eax, 0x80004001
// 00686565  c22400               ret 0x24
// auto-matched from its assembly shape

struct S_func_00686560 {

    unsigned int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};
unsigned int S_func_00686560::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return 0x80004001u;
}
