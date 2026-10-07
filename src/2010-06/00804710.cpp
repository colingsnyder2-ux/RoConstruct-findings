// roc 2010-06 00804710  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804710
//
// 00804710  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00804713  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00804710 {
    char pad0[68];
    int m_x;
    int f(int a1);
};
int S_func_00804710::f(int a1)
{
    return m_x;
}
