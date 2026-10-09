// roc 2009-12 0085a790  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a790
//
// 0085a790  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0085a793  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007851a0@ns_ROCX0000f4@@QAEHXZ)

namespace ns_ROCX0000f4 {
struct S_func_007851a0 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_007851a0::f()
{
    return m_x;
}
}
