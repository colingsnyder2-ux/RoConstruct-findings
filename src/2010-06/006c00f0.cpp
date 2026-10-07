// roc 2010-06 006c00f0  unit: RBX::VirtualHardwareDevice  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c00f0
//
// 006c00f0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006c00f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c00f0 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_006c00f0::f()
{
    return m_x;
}
