// roc 2011-06 0083e990  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e990
//
// 0083e990  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0083e993  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0083e990 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_0083e990::f(int a1)
{
    return m_x;
}
