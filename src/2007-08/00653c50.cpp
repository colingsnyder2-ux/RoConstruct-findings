// roc 2007-08 00653c50  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653c50
//
// 00653c50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00653c53  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00653c50 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_00653c50::f(int a1)
{
    return m_x;
}
