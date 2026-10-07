// roc 2010-06 007ce510  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce510
//
// 007ce510  8b4158               mov eax, dword ptr [ecx + 0x58]
// 007ce513  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007ce510 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_007ce510::f(int a1)
{
    return m_x;
}
