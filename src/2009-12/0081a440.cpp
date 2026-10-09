// roc 2009-12 0081a440  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a440
//
// 0081a440  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0081a443  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0073f530@ns_ROCX00007a@@QAEHH@Z)

namespace ns_ROCX00007a {
struct S_func_0073f530 {
    char pad0[88];
    int m_x;
    int f(int a1);
};
int S_func_0073f530::f(int a1)
{
    return m_x;
}
}
