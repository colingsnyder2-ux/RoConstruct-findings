// roc 2008-06 00445230  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445230
//
// 00445230  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 00445236  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445230 {
    char pad0[316];
    int m_x;
    int f();
};
int S_func_00445230::f()
{
    return m_x;
}
