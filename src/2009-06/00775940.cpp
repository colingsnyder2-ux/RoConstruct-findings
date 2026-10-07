// roc 2009-06 00775940  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775940
//
// 00775940  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00775943  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00775940 {
    char pad0[68];
    int m_x;
    int f(int a1);
};
int S_func_00775940::f(int a1)
{
    return m_x;
}
