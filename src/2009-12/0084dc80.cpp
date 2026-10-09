// roc 2009-12 0084dc80  unit: G3D::Win32Window  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dc80
//
// 0084dc80  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0084dc83  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007c8220@ns_ROCX0000b2@@QAEHXZ)

namespace ns_ROCX0000b2 {
struct S_func_007c8220 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_007c8220::f()
{
    return m_x;
}
}
