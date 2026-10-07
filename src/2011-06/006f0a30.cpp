// roc 2011-06 006f0a30  unit: RBX::VCharacterMesh::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f0a30
//
// 006f0a30  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 006f0a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f0a30 {
    char pad0[172];
    char m_x;
    char f();
};
char S_func_006f0a30::f()
{
    return m_x;
}
