// roc 2008-06 004781b0  unit: G3D::VARArea  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004781b0
//
// 004781b0  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 004781b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004781b0 {
    char pad0[124];
    int m_x;
    int f();
};
int S_func_004781b0::f()
{
    return m_x;
}
