// roc 2011-06 0085fbf0  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fbf0
//
// 0085fbf0  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0085fbf3  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0085fbf0 {
    char pad0[68];
    int m_x;
    int f(int a1);
};
int S_func_0085fbf0::f(int a1)
{
    return m_x;
}
