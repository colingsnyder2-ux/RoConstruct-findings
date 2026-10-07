// roc 2008-06 006fcfd0  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcfd0
//
// 006fcfd0  8b4144               mov eax, dword ptr [ecx + 0x44]
// 006fcfd3  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006fcfd0 {
    char pad0[68];
    int m_x;
    int f(int a1);
};
int S_func_006fcfd0::f(int a1)
{
    return m_x;
}
