// roc 2007-08 00474f10  unit: G3D::VARArea  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00474f10
//
// 00474f10  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00474f13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00474f10 {
    char pad0[124];
    int m_x;
    int f();
};
int S_func_00474f10::f()
{
    return m_x;
}
