// roc 2007-08 00473810  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473810
//
// 00473810  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 00473816  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00473810 {
    char pad0[276];
    int m_x;
    int f();
};
int S_func_00473810::f()
{
    return m_x;
}
