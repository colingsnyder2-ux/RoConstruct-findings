// roc 2009-12 00856650  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856650
//
// 00856650  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00856653  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0077b5f0@ns_ROCX0000c3@@QAEHXZ)

namespace ns_ROCX0000c3 {
struct S_func_0077b5f0 {
    char pad0[112];
    int m_x;
    int f();
};
int S_func_0077b5f0::f()
{
    return m_x;
}
}
