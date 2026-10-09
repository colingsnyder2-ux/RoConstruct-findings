// roc 2009-12 00774ca0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774ca0
//
// 00774ca0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00774ca3  8b4028               mov eax, dword ptr [eax + 0x28]
// 00774ca6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0070aa90@ns_ROCX000025@@QAEHXZ)

namespace ns_ROCX000025 {
struct I_func_0070aa90 {
    char pad[40];
    int m_x;
};
struct S_func_0070aa90 {
    char pad[24];
    I_func_0070aa90* m_p;
    int f();
};
int S_func_0070aa90::f()
{
    return m_p->m_x;
}
}
