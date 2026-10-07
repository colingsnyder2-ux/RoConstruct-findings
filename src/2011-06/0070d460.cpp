// roc 2011-06 0070d460  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070d460
//
// 0070d460  8a818c030000         mov al, byte ptr [ecx + 0x38c]
// 0070d466  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070d460 {
    char pad0[908];
    char m_x;
    char f();
};
char S_func_0070d460::f()
{
    return m_x;
}
