// roc 2009-06 00444db0  unit: G3D::_WeakPtr  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444db0
//
// 00444db0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00444db6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444db0 {
    char pad0[156];
    int m_x;
    int f();
};
int S_func_00444db0::f()
{
    return m_x;
}
