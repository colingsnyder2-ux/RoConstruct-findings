// roc 2011-06 0070d450  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070d450
//
// 0070d450  8b817c030000         mov eax, dword ptr [ecx + 0x37c]
// 0070d456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070d450 {
    char pad0[892];
    int m_x;
    int f();
};
int S_func_0070d450::f()
{
    return m_x;
}
