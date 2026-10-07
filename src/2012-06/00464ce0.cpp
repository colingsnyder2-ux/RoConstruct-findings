// roc 2012-06 00464ce0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464ce0
//
// 00464ce0  8a4178               mov al, byte ptr [ecx + 0x78]
// 00464ce3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464ce0 {
    char pad0[120];
    char m_x;
    char f();
};
char S_func_00464ce0::f()
{
    return m_x;
}
