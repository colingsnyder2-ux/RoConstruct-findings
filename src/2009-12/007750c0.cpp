// roc 2009-12 007750c0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007750c0
//
// 007750c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 007750c3  8b4010               mov eax, dword ptr [eax + 0x10]
// 007750c6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0070aeb0@ns_ROCX000027@@QAEHXZ)

namespace ns_ROCX000027 {
struct I_func_0070aeb0 {
    char pad[16];
    int m_x;
};
struct S_func_0070aeb0 {
    char pad[24];
    I_func_0070aeb0* m_p;
    int f();
};
int S_func_0070aeb0::f()
{
    return m_p->m_x;
}
}
