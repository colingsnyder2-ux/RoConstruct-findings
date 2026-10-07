// roc 2009-06 0043fb40  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043fb40
//
// 0043fb40  8a4140               mov al, byte ptr [ecx + 0x40]
// 0043fb43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043fb40 {
    char pad0[64];
    char m_x;
    char f();
};
char S_func_0043fb40::f()
{
    return m_x;
}
