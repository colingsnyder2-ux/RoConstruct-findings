// roc 2009-12 007750d0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007750d0
//
// 007750d0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 007750d3  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007750d6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0070aec0@ns_ROCX000028@@QAEHXZ)

namespace ns_ROCX000028 {
struct I_func_0070aec0 {
    char pad[28];
    int m_x;
};
struct S_func_0070aec0 {
    char pad[24];
    I_func_0070aec0* m_p;
    int f();
};
int S_func_0070aec0::f()
{
    return m_p->m_x;
}
}
