// roc 2008-06 004899a0  unit: G3D::GWindow  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004899a0
//
// 004899a0  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 004899a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004899a0 {
    char pad0[436];
    int m_x;
    int f();
};
int S_func_004899a0::f()
{
    return m_x;
}
