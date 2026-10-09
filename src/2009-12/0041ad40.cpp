// roc 2009-12 0041ad40  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad40
//
// 0041ad40  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0041ad43  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0041a900@ns_ROCX00003c@@QAEHXZ)

namespace ns_ROCX00003c {
struct S_func_0041a900 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_0041a900::f()
{
    return m_x;
}
}
