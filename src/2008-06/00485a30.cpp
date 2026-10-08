// roc 2008-06 00485a30  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485a30
//
// 00485a30  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00485a33  051c010000           add eax, 0x11c
// 00485a38  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00485a30 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00485a30::f()
{
    return m_x + 0x11c;
}
