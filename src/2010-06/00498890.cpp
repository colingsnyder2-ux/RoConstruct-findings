// roc 2010-06 00498890  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498890
//
// 00498890  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00498893  051c010000           add eax, 0x11c
// 00498898  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00498890 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00498890::f()
{
    return m_x + 0x11c;
}
