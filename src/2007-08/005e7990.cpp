// roc 2007-08 005e7990  unit: RBX::VFlag::?$FactoryProduct  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7990
//
// 005e7990  d9810c010000         fld dword ptr [ecx + 0x10c]
// 005e7996  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e7990 {
    char pad[268];
    float m_x;
    float f();
};
float S_func_005e7990::f()
{
    return m_x;
}
