// roc 2011-06 0086bec0  unit: RBX::VirtualHardwareDevice  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bec0
//
// 0086bec0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0086bec3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0086bec0 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_0086bec0::f()
{
    return m_x;
}
