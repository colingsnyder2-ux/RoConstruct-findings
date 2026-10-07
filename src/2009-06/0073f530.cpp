// roc 2009-06 0073f530  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f530
//
// 0073f530  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0073f533  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0073f530 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_0073f530::f(int a1)
{
    return m_x;
}
