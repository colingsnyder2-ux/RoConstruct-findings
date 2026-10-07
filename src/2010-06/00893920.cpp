// roc 2010-06 00893920  unit: VCWorkspace::?$CComObject  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893920
//
// 00893920  33c0                 xor eax, eax
// 00893922  c21000               ret 0x10
// auto-matched from its assembly shape

struct S_func_00893920 {

    int f(int a1, int a2, int a3, int a4);
};
int S_func_00893920::f(int a1, int a2, int a3, int a4)
{
    return 0;
}
