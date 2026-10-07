// roc 2007-08 005bae50  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005bae50
//
// 005bae50  8a8150010000         mov al, byte ptr [ecx + 0x150]
// 005bae56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005bae50 {
    char pad0[336];
    char m_x;
    char f();
};
char S_func_005bae50::f()
{
    return m_x;
}
