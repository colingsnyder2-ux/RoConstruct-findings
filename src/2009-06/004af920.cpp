// roc 2009-06 004af920  unit: G3D::Shader  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af920
//
// 004af920  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004af923  051c010000           add eax, 0x11c
// 004af928  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004af920 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_004af920::f()
{
    return m_x + 0x11c;
}
