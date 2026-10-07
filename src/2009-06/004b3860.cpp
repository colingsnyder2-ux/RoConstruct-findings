// roc 2009-06 004b3860  unit: G3D::GWindow  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3860
//
// 004b3860  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 004b3866  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b3860 {
    char pad0[200];
    int m_x;
    int f();
};
int S_func_004b3860::f()
{
    return m_x;
}
