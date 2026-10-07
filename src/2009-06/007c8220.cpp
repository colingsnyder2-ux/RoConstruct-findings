// roc 2009-06 007c8220  unit: RBX::VirtualHardwareDevice  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8220
//
// 007c8220  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007c8223  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c8220 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_007c8220::f()
{
    return m_x;
}
