// roc 2008-06 006c6fb0  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6fb0
//
// 006c6fb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006c6fb3  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006c6fb0 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_006c6fb0::f(int a1)
{
    return m_x;
}
