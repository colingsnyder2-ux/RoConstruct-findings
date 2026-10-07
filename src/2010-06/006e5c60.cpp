// roc 2010-06 006e5c60  unit: RBX::VLuaDragger::?$BoundFuncDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e5c60
//
// 006e5c60  d981ac000000         fld dword ptr [ecx + 0xac]
// 006e5c66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e5c60 {
    char pad[172];
    float m_x;
    float f();
};
float S_func_006e5c60::f()
{
    return m_x;
}
