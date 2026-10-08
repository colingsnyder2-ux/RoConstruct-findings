// roc 2007-08 004827e0  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004827e0
//
// 004827e0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004827e3  051c010000           add eax, 0x11c
// 004827e8  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004827e0 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_004827e0::f()
{
    return m_x + 0x11c;
}
