// roc 2009-12 007750b0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007750b0
//
// 007750b0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 007750b3  8b4004               mov eax, dword ptr [eax + 4]
// 007750b6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0070aea0@ns_ROCX000026@@QAEHXZ)

namespace ns_ROCX000026 {
struct I_func_0070aea0 {
    char pad[4];
    int m_x;
};
struct S_func_0070aea0 {
    char pad[24];
    I_func_0070aea0* m_p;
    int f();
};
int S_func_0070aea0::f()
{
    return m_p->m_x;
}
}
