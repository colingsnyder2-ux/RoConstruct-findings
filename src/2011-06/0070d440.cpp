// roc 2011-06 0070d440  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070d440
//
// 0070d440  8b8168030000         mov eax, dword ptr [ecx + 0x368]
// 0070d446  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070d440 {
    char pad0[872];
    int m_x;
    int f();
};
int S_func_0070d440::f()
{
    return m_x;
}
