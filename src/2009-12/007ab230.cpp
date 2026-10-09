// roc 2009-12 007ab230  unit: RBX::NormalBreakConnector  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ab230
//
// 007ab230  8b4108               mov eax, dword ptr [ecx + 8]
// 007ab233  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007ec6c0@ns_ROCX00002e@@QAEHXZ)

namespace ns_ROCX00002e {
struct S_func_007ec6c0 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_007ec6c0::f()
{
    return m_x;
}
}
