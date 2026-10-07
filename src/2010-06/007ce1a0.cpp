// roc 2010-06 007ce1a0  unit: G3D::Win32Window  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce1a0
//
// 007ce1a0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007ce1a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007ce1a0 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_007ce1a0::f()
{
    return m_x;
}
