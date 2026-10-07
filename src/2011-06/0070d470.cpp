// roc 2011-06 0070d470  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070d470
//
// 0070d470  8b8198030000         mov eax, dword ptr [ecx + 0x398]
// 0070d476  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070d470 {
    char pad0[920];
    int m_x;
    int f();
};
int S_func_0070d470::f()
{
    return m_x;
}
